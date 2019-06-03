#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int legajo;
    char nombre[20];
    char apellido [20];
    float sueldo;
}eEmpleado;

int main()
{
    eEmpleado* pEmpleado = (eEmpleado**)/*Lo converti en doble puntero a empleado, es un cast*/ malloc (sizeof(eEmpleado*));//Por malloc pido sizeof de puntero porque guarda direccion de memoria de putnero a empleado
    eEmpleado** ppEmpleado = &pEmpleado;

    pEmpleado->legajo =1234;

    printf("El legajo es %d \n\n", pEmpleado->legajo);

    printf("El legajo es %d \n\n", (*ppEmpleado)->legajo);
    return 0;
}
