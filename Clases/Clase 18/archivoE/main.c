#include <stdio.h>

#define ARCH	"./bin.dat"
#define ESC 27

struct a{
		char nombre[31];
		int edad;
	};

int main (void)
{
    char a;
	FILE  *bin;
	struct a pers;
	system("pause");
	printf("\nSe va a generar por primera vez el archivo\n");
	if ((bin=fopen(ARCH,"wb"))==NULL)
	{
		printf("El archivo no puede ser abierto");
		exit(1);
	}
	do
	{
		printf("\nIngrese el nombre: ");
		fgets(pers.nombre, sizeof(pers.nombre), stdin);
		printf("Ingrese la edad: ");
		scanf("%d",&pers.edad);
		__fpurge(stdin);
		fwrite(&pers,sizeof(pers),1,bin);
		printf("\nPresione ESC para terminar");
	}while(fgets(a, sizeof(a), stdin)!=ESC);

	fclose(bin);

	return 0;
}
