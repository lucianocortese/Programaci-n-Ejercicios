#include <stdio.h>
#include <stdlib.h>
#define TAM_VEC 5


void mostrarVector1(int vec[], int TAM);
void mostrarVector2(int vec[], int TAM);
void mostrarVector3(int* vec, int TAM);
void mostrarVector4(int* vec, int TAM);

int main ()
{
    int vec[]= {3, 4, 1, 5, 2};

    mostrarVector1(vec, TAM_VEC);
    mostrarVector2(vec, TAM_VEC);
    mostrarVector3(vec, TAM_VEC);
    mostrarVector4(vec, TAM_VEC);

}

void mostrarVector1(int vec[], int TAM){

    printf("Vector1: \n");
    for (int i=0;i<5;i++){
        printf("%d \n", vec[i]);
    }
} //con corchetes es nomeclatura vectoreal, sino se llama nomeclatura de puntero, ASIIIII

void mostrarVector2(int vec[], int TAM){


    printf("Vector2: \n");
     for (int i=0;i<5;i++){
        printf("%d \n", *(vec + i));
     }

}
// con nomeclatura puntero. TAMPOCO ESTA BIEN

void mostrarVector3(int* vec, int TAM){
    printf("Vector3: \n");
    for (int i=0;i<5;i++){
        printf("%d \n", vec[i]);

    }
} // pero muestra vectoreal ESTA MAL

void mostrarVector4(int* vec, int TAM){
    printf("Vector4: \n");
    for (int i=0;i<5;i++){
        printf("%d \n", *(vec + i));
     }

}// ASI TAMBIEN.

//TIPO DE MEMORIA HEAP Y STACK0










/*
void leerPuntero(int* p);

int main()
{
    int x =10; //El dato no es importante por el tamaño y la forma de guardado (complemento a 2, ASCII o IEEE754).
/*
                //Con eof se sabe que es el final de un file (como el /0 en strings).

    int* p;
  //int *p; (el asterisco es indiferente al espacio)

    p=&x; // &Operador de direccion

    int** r = &p; //guarda la direccion de  puntero de puntero p (PUNTERO A PUNTERO).
    printf("%d \n",x); // devuelve 10.

    printf("%d \n", *p);// *=Operador de indireccion.

    printf("%x \n",&x);// el %x es la forma que muestre hexadecimal

    printf("%p \n ", p);//lo mismo que arriba y la %p muestra lo mismo con dos ceros

    leerPuntero(&x);


    return 0;
}

void leerPuntero(int* p){


    printf("%d \n", *p);
    *p=38;
    printf("%d \n", *p);

}
*/
