#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "C:\Users\Lucho\Desktop\UTN\Bibliotecas\get b\get.h"
    /*Solicitar al usuario 5 números, permitir listarlos por pantalla indicando el máximo, el mínimo y el promedio.
    Permitir Modificar el valor de cualquiera de los números cargados indicando el índice del mismo y su nuevo valor.
    */

int main()
{
    int array [5];
    int numero;
    int indice;
    int menu=0;
    int aux;

    for (indice=0; indice<5; indice++)
    {
            numero= getInt("Ingrese un numero\n");
            array[indice]= numero;
    }

    while (menu != 5)
    {
        menu= getInt("\n1 Mostrar\n2 Modificar\n3 Mostrar en orden\n4 Mostrar promedio\n5 Salir\n");
        switch (menu)
        {
        case 1:

            printf("Indice      |Valor       \n");

        for (indice=0; indice<5; indice++)
        {
                printf("     %d     |    %d      \n", indice, array[indice]);
        }


        break;

        case 2:
            indice=getInt("Que indice desea modificar?\n");
            if(indice>=0&&indice<5)
            {
                array[indice] = getInt("Que numero desea escribir en el indice seleccionado?\n");

            }
            else{
                indice=getInt("El numero ingresado no es correcto, debe estar entre 0 y 5. \nIngreselo nuevamente\n");
            }
        break;
        case 3:
            for (indice=0; indice<4; indice++)
        {
                for (int j=indice+1; j<5;j++)
                {
                    if(indice>j)
                        {
                            aux=indice;
                            indice=j;
                            j=aux;
                        }
                }
        }
         for (int indice=0; indice<5; indice++)
        {
            printf("%d      |%d \n", indice, array[indice]);
        }
        break;
        case 4:
        break;
        case 5:
        break;
        default:
            menu=getInt("\n\nLa opcion ingresada no es correcta. \n\n1 Mostrar\n2 Modificar\n3 Salir\n");
        break;

        }
    }

    return 0;
}
