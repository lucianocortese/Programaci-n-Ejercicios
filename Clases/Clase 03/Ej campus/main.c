#include <stdio.h>
#include <stdlib.h>
int retorno();

int main ()
{
    printf("\n\nEl numero es %d", retorno ());
}

int retorno()
{
   int num;

   printf("\n\nIngrese un numero\n\n");
   scanf("%d", &num);



    return num;
}
