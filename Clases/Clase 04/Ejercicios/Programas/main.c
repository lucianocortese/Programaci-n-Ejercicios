#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "programas.h"

int main()
{
    int numSecreto;
    int numeroIngresado;
    char resp;


    resp='s';

    while (resp == 's')
    {
        numSecreto = rand() % 101;

        do{
           numeroIngresado = getInt ();
        } while (numeroIngresado<=0 || numeroIngresado>=100);


         while(numeroIngresado!=numSecreto)
        {

            if ( numeroIngresado<numSecreto)
            {
                printf("\nEl numero es mayor al ingresado, intentá de nuevo\n");
            }
            else
            {
                printf("\nEl numero es menor al ingresado, intentá de nuevo\n");
            }

            do{
               numeroIngresado = getInt ();
            } while (numeroIngresado<=0 || numeroIngresado>=100);

            }

        if (numeroIngresado== numSecreto)
        {
            printf("\nGanaste crack\n");
        }

        do
        {
        printf("\nSi desea continuar presione s, si no presione n\n");
        fflush(stdin);
        scanf("%c", &resp);
        resp = tolower(resp);
        } while (resp!='n' && resp !='s');

    }

    return 0;
}

