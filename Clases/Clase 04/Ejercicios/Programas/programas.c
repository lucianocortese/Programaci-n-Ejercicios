#include <stdio.h>
#include <stdlib.h>


/** \brief Solicita un entero al usuario y devuelve el numero indicado
 * \return El numero ingresado
 */

int getInt ()
{
    int entero;
    printf("Escriba un numero entero entre 0 y 100\n\n");
    scanf("%d", &entero);
    return entero;
}

/** \brief Solicita un float al usuario y devuelve el flotante indicado
 * \return El numero ingresado
 */

float getFloat ()
{
    float flotante;
    printf("Escriba un numero racional\n\n");
    scanf("%f", &flotante);
    return flotante;
}

/** \brief Solicita un character al usuario y devuelve el caracter indicado
 * \return El caracter ingresado
 */

char getChar ()
{
    char caracter;
    printf("Escriba un caracter\n\n");
    fflush(stdin);
    scanf("%c", &caracter);
    return caracter;
}
