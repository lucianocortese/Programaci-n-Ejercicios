#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int max;
    int min;
    int contador;
    int acumulador;
    float promedio;

    acumulador=0;

    for (contador=0; contador<5; contador++)
    {

        printf("Ingrese un numero \n\n");
        scanf("%d", &numero);

        acumulador=acumulador+numero;

      if (contador==0 || numero>max)
      {
          max=numero;
      }
      else{

      }
      if (contador==0||numero<min)
      {
          min=numero;
      }
      else{

      }

    }


      promedio=(float)acumulador/ contador;

      printf("El promedio es %f \nEl maximo es %d\nEl minimo es %d", promedio, max, min);

    return 0;
}
