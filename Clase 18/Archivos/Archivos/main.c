#include <stdio.h>

#define ARCH	".\\bin.dat"
#define ESC 27

struct a{
		char nombre[31];
		int edad;
		int legajo;
		int isEmpty;
	};

void getss(char *cadena);

int main (void)
{
   FILE  *bin;
   struct a pers;
   int cant;
   int legajoAux;
   char *val;

   if ((bin=fopen(ARCH,"rb+"))==NULL){
      if ((bin=fopen(ARCH,"wb+"))==NULL){
         printf("No se pudo abrir el archivo");
         exit(1);
      }
   }

   do{
      printf("\nIngrese el nombre: ");
      setbuf(stdin,NULL);
      scanf("%s",pers.nombre);

      printf("Ingrese la edad: ");
      scanf("%d",&pers.edad);

      printf("Ingrese el legajo: ");
      scanf("%d",&pers.legajo);

      pers.isEmpty=0;

      setbuf(stdin,NULL);
      fseek(bin , 0L, SEEK_END);
      fwrite(&pers,sizeof(pers),1,bin);

      printf("\nPresione ESC para terminar");
   }while((gets(val))==ESC);

   /* Busqueda */
   system("clear");
   printf("Legajo: ");
   scanf("%d", &legajoAux);

   //se lleva el indicador de posición al principio para comenzar a leer
   rewind (bin);

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

      if(legajoAux == pers.legajo){
        printf("\nIngrese nuevo nombre: ");
        setbuf(stdin, NULL);
        scanf("%s",pers.nombre);

        fseek(bin , (long) (-1) * sizeof(pers), SEEK_CUR);
        setbuf(stdin,NULL);
        fwrite(&pers,sizeof(pers),1,bin);
        break;
      }

      //printf("\n%s\t%d",pers.nombre,pers.edad);
   }

   //se lleva el indicador de posición al principio para comenzar a leer
   rewind (bin);

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
}

void gets(char *cadena){

	scanf("%[^\n]", cadena);

	return;

}


