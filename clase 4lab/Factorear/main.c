#include <stdio.h>
#include <stdlib.h>
int factorear (float num);

int main()
{
    float numero;

    do{
       printf("ingrese un numero positivo\n");
       scanf("%f", &numero);
        }while (numero<0);

        printf("El resultado es %d", factorear(numero));

    return 0;
}

int factorear (float num)
{
    int numero;
    numero=(int)num;
    int fact;
    fact=1;
    for(numero; numero!=0; numero--)
    {
        if (fact==1)
        {
            fact=numero;
        }
        else
        {
            fact= fact*numero;
        }

        return numero;
    }

}
