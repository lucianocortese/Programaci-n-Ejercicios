#include <stdio.h>
#include <stdlib.h>
int factorear (int num);

int main()
{
    int numero;

    do{
       printf("ingrese un numero positivo\n");
       scanf("%d", &numero);
        }while (numero<0);

        printf("El resultado es %d",factorear(numero));

    return 0;
}

int factorear (int num)
{

    int resp;
    resp=1;

    for(num; num!=0; num--)
    {

        if (resp==1)
        {
            resp=num;
        }
        else
        {
            resp= resp*num;
        }
    }

    return resp;
}
