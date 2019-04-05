#include <stdio.h>
#include <stdlib.h>
#include "tp.h"

int main()
{

    int menu;
    int flag;
    float num1;
    float num2;
    float sumar;
    float dividir;
    float restar;
    float multiplicar;
    int factor;
    int factor2;

    num1=0;
    num2=0;
    menu=5;
    flag=0;

    do {

        printf("\n Menu de opciones \n\n1. Ingrese el primer numero (numero 1=  %.2f)\n2. Ingrese el segundo numero (numero 2=  %.2f)\n3. Calcular todos los resultados\n4. Mostrar todos los resultados\n0. Salir\n\n", num1, num2);
        scanf("%d", &menu);

        switch(menu)
        {
        case 0:
        break;
        case 1:
            printf("*****Ingese el numero 1******\n");
            scanf("%f", &num1);
            break;
        case 2:
            printf("******Ingrese el numero 2*****\n");
            scanf("%f", &num2);
            break;
        case 3:

            sumar= suma(num1, num2);

            restar= resta(num1, num2);

            multiplicar= multiplicacion(num1, num2);


            dividir= division(num1, num2);

            if(num1>=0)
            {
                factor=factorial((int)num1);
            }
            else
            {
                printf("Para calcular el factorial el numero debe ser positivo");
            }

             if(num2>=0)
            {
                factor2=factorial((int)num2);
            }
            else
            {
                printf("Para calcular el factorial el numero debe ser positivo");
            }
            flag=1;
            break;
        case 4:
            if(flag!=0)
            {
                if(num2!=0)
                {
                    printf("La suma de los numeros es %f\n\nLa resta de los numeros es %f\n\nLa multiplicacion de los numeros es %f\n\nLa division de los numeros es %f\n\nEl factorial del primer numero ingresado es %d\n\nEl factorial del segundo numero ingresado es %d\n\n", sumar, restar, multiplicar, dividir,factor,factor2);
                }
                else
                {
                    printf("La suma de los numeros es %f\n\nLa resta de los numeros es %f\n\nLa multiplicacion de los numeros es %f\n\nNo se puede dividir por cero\n\nEl factorial del primer numero ingresado es %d\n\nEl factorial del segundo numero ingresado es %d\n\n", sumar, restar, multiplicar, dividir,factor,factor2);
                }

            }
            else{
                printf("primero debes efectuar el paso 3");
            }

            flag=0;
            break;
        default:
            printf("Esa opcion no existe, ingrese un numero nuevamente");
        }
     }while (menu!=0);

    return 0;
}
