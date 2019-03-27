#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int fact;

    printf("Ingrese el numero a factorear");
    scanf ("%d", num);

    printf("el factoreo de %d es: %d", fact);

    for (num=num; num!=1; num--)
    {
        fact=num*num;

    }
}
