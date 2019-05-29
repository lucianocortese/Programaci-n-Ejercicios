#include <stdio.h>
#include <stdlib.h>

/*
Limpie la pantalla
Solicite dos valores numéricos al usuario distintos de cero
Asigne a las variables numero1 y numero2 los valores obtenidos
Realice la resta de dichas variables
Muestre el resultado por pantalla
Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor
Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero
*/

int main(int argc, char *argv[]) {

	int a;
	int b;
	int resultado;

	system("cls");

	do
    {
        printf("\nIngrese 1 numero: ");
        scanf("%d",&a);
    if(a==0)
    {
        printf("El numero debe ser distinto de cero, ingrese el numero nuevamente\n\n");
    }
    }while (a==0);

	printf("\nIngrese 2 numero: ");
	scanf("%d",&b);
	resultado=a-b;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	if(resultado==0){
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");


	return 0;
}
