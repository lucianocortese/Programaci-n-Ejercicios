#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int contador;
    int positivos;
    int negativos;

    positivos=0;
    negativos=0;

    for(contador=1; contador<=10; contador++)
    {
        printf("Escriba un numero\n\n");
        scanf("%d", &num);

        if (num<0)
        {
            negativos++;
        }
        else if (num>0)
        {
            positivos++;
        }
        else
        {
        }

    }

    printf("La cantidad de positivos es %d . \n\nMientras que el numero de negativos es %d", positivos, negativos);

    return 0;
}
