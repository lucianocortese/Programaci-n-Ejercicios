#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define TAM_EMP 3
#define TAM_SEC 5
#define TAM_MENU 20
#define TAM_ALM 20000

typedef struct{
    int dia;
    int mes;
    int anio;

   }eFecha;
typedef struct{
    int legajo;
    char vNombre[51];
    char vApellido [51];
    char sexo;
    float sueldo;
    eFecha alta;
    int idSector;
    int isEmpty;
}eEmpleados;
typedef struct{
    int id;
    char vDescripcion[51];
}eSector;//Hardcodear
typedef struct{
    int codigo;
    char vDescripcion[51];
    float importe;

}eMenu;
typedef struct{
    eEmpleados legajo;
    eMenu codigo;
    eFecha;

}eAlmuerzo;//Hardcodear


void mostrarEmpleado (eEmpleados lista[], int ind);
void mostrarEmpleados (eEmpleados lista[], int tam);

int main()
{

    eEmpleados lista [TAM_EMP]={{1, "lucho", 'm', 20000},{2, "miguel", 'm', 25000},{3, "juana", 'f', 30000}};
    int menu;
    char resp='n';
    int contLegajo;


    do{
        printf("Menu ABL Empleados\n");
        printf("1-Alta de Empleados\n");
        printf("2-Modificar empleados\n");
        printf("3-Bajar empleados\n");
        printf("4-Ordenar empleados\n");
        printf("5-Listar empleados\n");
        printf("6-Alta almuerzos\n");
        printf("0-Salir\n");
        scanf("%d", &menu);

        switch(menu)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                mostrarEmpleados(lista, TAM_EMP);
                break;
            case 6:
                break;
            case 0:
                printf("Estas seguro que deseas salir? s/n");
                fflush(stdin);
                scanf("%c", &resp);
                break;
            default:
                printf("La opcion no es correcta, intente nueva opcion");
                break;

        }


    }while(resp!='s');


    return 0;
}


void mostrarEmpleado (eEmpleados lista[], int ind){
    printf("%d   %s   %c  %f", lista[ind].legajo, lista[ind].vNombre, lista[ind].sexo, lista[ind].sueldo);
}
void mostrarEmpleados (eEmpleados lista[], int tam){
        for(int i=0; i<tam; i++)
        {
            mostrarEmpleado(lista, i);
        }
}
void inicializarEmpleados (eEmpleados lista[], int tam){
    for(int i=0; i<tam; i++){
        lista[i].isEmpty=1;
    }
}
int buscarvacio (eEmpleados lista[], int tam){
    int vacio;
    for (int i=0;i<tam;i++){
        if(lista[i].isEmpty == 1){
            vacio=i;
        }
    }
    return vacio;
}
int altaEmpleado (eEmpleados lista [], int tam, int contLegajo){

    int vacio;

    vacio=buscarvacio(lista, tam);

    if(vacio==-1){
        printf("No hay lugar libre");
    }
    else{

        printf("Ingresar nombre: ");
        fflush(stdin);
        fgets(lista[vacio].vNombre, sizeof(lista[vacio].vNombre-1), (stdin));

        printf("Ingrese el apellido: ");
        fflush(stdin);
        fgets(lista[vacio].vApellido, sizeof(lista[vacio].vApellido-1), (stdin));

        printf("Elija el sexo: ");







    }
    contLegajo ++;
    return contLegajo;
}







//void init(eSector sectores[], tamSec);     protipo.
/*
void init();
eSector sec[]={hardcodeo}
int i;
for(i=0;i<0;i++);
    {sectores[i].id = sec[i].id
    strcpy (sectores[i].descrupcion, sec [i].descripcion);

*/
