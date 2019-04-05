#include <stdio.h>
#include <stdlib.h>


float suma (float num1,  float num2)
{
    float suma;
    suma= num1+num2;
    return suma;
}

float resta (float num1,  float num2)
{
    float resta;
    resta= num1 - num2;
    return resta;
}

float division (float num1,  float num2)
{
    float division;
    division= num1 / num2;
    return division;
}

float multiplicacion (float num1,  float num2)
{
    float multiplicacion;
    multiplicacion= num1 * num2;
    return multiplicacion;
}


int factorial (int num)
{
    float acumulador;
    acumulador=1;

    for (num;num>=1;num--)
    {
        if(acumulador==1)
        {
            acumulador=num;
        }
        else
        {
            acumulador=acumulador*num;
        }
    }

    return acumulador;
}



