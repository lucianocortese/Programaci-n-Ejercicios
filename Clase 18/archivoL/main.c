#include <stdio.h>

#define ARCH	".\\bin.dat"

struct a{
		char nombre[31];
		int edad;
	};


int main (void)
{
	FILE  *bin;
	struct a pers;
	int cant;
	if ((bin=fopen(ARCH,"rb"))==NULL)
	{
		printf("No se pudo abrir el archivo");
		exit(1);
	}
	while(!feof(bin))//recorremos el archivo y negamos el return para que si llega al final nos de uno y se transforme en cero para salir
	{
			cant = fread(&pers,sizeof(pers),1,bin);//se posiciona en el segundo elemento
			if(cant!=1)
			{
				if(feof(bin))
					break;
				else
				{
					printf("No leyo el ultimo registro");
					break;
				}
			}
			printf("\n%s\t%d",pers.nombre,pers.edad);
	}
	fclose(bin);

	return 0;
}
