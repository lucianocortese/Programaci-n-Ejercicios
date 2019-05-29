#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846
float areaCirculo(float radio);


int main ()
{
    float radio;

    printf("\nIndique el radio del cuadrado\n\n");
    scanf("%f", &radio);

    printf("\n\nEl area es %.3f", areaCirculo(radio));
    return 0;
}

float areaCirculo(float radio)
{
    float area;

    area= radio*radio * M_PI ;


    return area;
}

