#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "/home/lucho/Escritorio/UTN/Parcial bibliotecas/input.h"

int main()
{
    int a;
    int ret, ret2, ret3, ret4;
    float b;
    char c;
    char d[52];

    ret= getInt(&a,"Ingrese un numero del 1 al 10", "El numero debe ser del 1 al 10, intentemos nuevamente",1,10);
    ret2= getFloat(&b, "Ingrese un decimal del 1 al 10","Error, debe ser del 1 al 10, intenemos nuevamente",1,10);
    ret3= getChar(&c, "Ingrese el sexo m/f", "El sexo solo puede ser f o m, intentemos nuevamente", 'f','m');
    ret4= getString(d, "Ingrese el nombre entre 10 y 50 caracteres", "Error, debe ser entre 10 y 50 caracteres, intentemos nuevamente\n", 10, 50);
    printf("%d, %f, %c, %s\n\n",a,b,c,d);
    printf("%d %d %d %d",ret, ret2, ret3, ret4);



    return 0;
}
