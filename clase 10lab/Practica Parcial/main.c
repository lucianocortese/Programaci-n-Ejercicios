#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
typedef struct
{
    int dia;
    int mes;
    int anio;

   }eFecha;

typedef struct{
    int legajo;
    char vNombre[20];
    char sexo;
    float sueldo;
    eFecha alta;
    int idSector;
    int isEmpty;
}eEmpleados;

typedef struct
{
    int id
    char vDescripcion[51];
}eSector;//Hardcodear



typedef struct
{
    int codigo;
    char vDescripcion[51];
    float importe;

}eMenu;
typedef struct{
    eEmpleados legajo;
    eMenu codigo;
    eFecha;

}eAlmuerzo;//Hardcodear



int main()
{

    return 0;
}


//void init(eSector sectores[], tamSec);     protipo.
/*
void init();
eSector sec[]={hardcodeo}
int i;
for(i=0;i<0;i++);
    {sectores[i].id = sec[i].id
    strcpy (sectores[i].descrupcion, sec [i].descripcion);


