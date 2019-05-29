#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=3;
    int *p;
    int *o;
    char *d;
    o=NULL;
    p=&n;
    char nombre[7]= {'j','u','a','n'};
    d=nombre;

    printf("%d\n", *p); //Muestra el valor de la variable de la direcciòn de memoria guardada en p. *p=3;
    printf("%p\n", p); //Muestra la direcciòn de memoria de "n" que està guardada en p
    printf("%p\n", &p);//Muestra la direccion de memoria de p.


        int i=0;
        for (i; i<4; i++){
            printf("%c\n",*(d+i));
            printf("%p\n", d);
        }
        printf("\n\n\n\n");



        while(*(d+i) != '\0'){


            printf("%c\n", *(d+i));
            printf("%p\n", d);
            i++;
        }

        printf("\n\n\n\n");

        while(*d != '\0')
        {
            printf("%c\n",*d);
            printf("%p\n", d);
            d++;
        }





    /*
        if (punteroA>punteroB) dos punteros
           (punteroA==0xAB7)  punteros con numero hx explicito
           (punteroB != &algo) puntero con direccion de memoria de otra variable
           (punteroB == NULL) puntero con nulo.
    */


    return 0;
}
