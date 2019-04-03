#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Lucho\Desktop\UTN\Programaci-n-Ejercicios\funciones TP\tp.h"

int main()
{

    int menu;
    float num1;
    float num2;
    float sumar;
    float dividir;
    float restar;
    float multiplicar;
    float factor;
    float factor2;


    num1=0;
    num2=0;
    menu=5;

    do {

        printf("\n Menu de opciones \n\n1. Ingrese el primer numero (numero 1=  %.2f)\n2. Ingrese el segundo numero (numero 2=  %.2f)\n3. Calcular todos los resultados\n4. Mostrar todos los resultados\n0. Salir\n\n", num1, num2);
        scanf("%d", &menu);

        switch(menu)
        {
        case 0:
        break;
        case 1:
            printf("**Ingese el numero 1\n");
            scanf("%f", &num1);
            break;
        case 2:
            printf("**Ingrese el numero 2\n");
            scanf("%f", &num2);
            break;
        case 3:
            sumar= suma(num1, num2);
            restar= resta(num1, num2);
            multiplicar= multiplicacion(num1, num2);
            dividir= division(num1, num2);
            break;
        case 4:
            printf("La suma de los numeros es %f\n\nLa resta de los numeros es %f\n\nLa multiplicacion de los numeros es %f\n\nLa division de los numeros es %f\n\n", sumar, restar, multiplicar, dividir);
            break;
        }
     }while (menu!=0);
    return 0;
}
