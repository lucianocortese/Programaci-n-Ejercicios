#include <stdio.h>

#define ARCH	".\\bin.dat"
#define ESC 27

struct a{
		char nombre[31];
		int edad;
	};

int main (void)
{
   FILE  *bin;
   struct a pers;
   int cant;

   if ((bin=fopen(ARCH,"rb+"))==NULL){ //doble modo de escritura
      if ((bin=fopen(ARCH,"wb+"))==NULL){
         printf("No se pudo abrir el archivo");
         exit(1);
      }
   }

   do{
      printf("\nIngrese el nombre: ");
      scanf("%s",pers.nombre);

      printf("Ingrese la edad: ");
      scanf("%d",&pers.edad);

      setbuf(stdin, NULL);
      fseek(bin , 0L, SEEK_END);//tres tipos de parametros:
                                //Nombre del archivo
                                //SEEK_SET(del prinicpio), SEEK CUR(desde donde está actualmente, SEEK END(fin del archivo);
                                //0L (0 es la cantidad de bytes que se va a mover) (la "L" es de long.
      fwrite(&pers,sizeof(pers),1,bin);

      printf("\nPresione ESC para terminar");
   }while((scanf("%c"))!=ESC);

   //se lleva el indicador de posición al principio para comenzar a leer
   rewind (bin);//para poder leer tenes que rebobinar (lo llevas al comienzo del archivo.

   while(!feof(bin)){
      cant = fread(&pers,sizeof(pers),1,bin);

      if(cant!=1){
         if(feof(bin)){
			break;
         }
         else{
			printf("No leyo el ultimo registro");
			break;
         }
      }

      printf("\n%s\t%d",pers.nombre,pers.edad);
   }

   fclose(bin);

   return 0;
}
