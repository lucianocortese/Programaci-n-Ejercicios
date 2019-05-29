#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec [5]; //Declaramos el vector
    int aux; //Necesito para ordenar, asi guardo el dato que se movera. (tiene que ser el tipo de datos que el vector).


    for (int i=0; i<5;i++)
    {
        printf("dgwrgwe");
        scanf("%d", &vec[i]);
    }

    for(int i=0;i<4;i++)// Mientras (n-1)
    {
        for(int j=i+1; j<5; j++)//"J" es igual a "I" mas uno para tener el indice en I y el siguiente en J.
        {
            if(vec [i]> vec [j])// si usas mayor es asendente
            {
                aux= vec[i];// guardas el valor en auxiliar y luego truncas los valores.
                vec [i]= vec [j];
                vec [j]= aux;
            }
        }

    }
        for (int i=0; i<5; i++) // TENES QUE ARMAR OTRO FOR PARA MOSTRAR ASI TOMA LOS DIFERENTES INDICES EN LA VARIABLE I.
        {
            printf("%d ", vec[i]);
        }

    return 0;
}
