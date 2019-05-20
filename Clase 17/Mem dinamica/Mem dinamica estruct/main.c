#include <stdio.h>
#include <stdlib.h>


typedef struct {

int legajo;
char nombre[20];
char sexo;
float sueldo;

}eEmpleado;


eEmpleado* new_Empleado();
eEmpleado* new_EmpleadoParam(int leg, char* nombre, char sexo, float sueldo);


int main()
{

    eEmpleado emp1;

    eEmpleado* pEmp = (eEmpleado*)malloc(sizeof(eEmpleado));

    if(pEmp==NULL){
        exit(1);
    }

    printf("Ingrese legajo: ");
    //Usas el & porque legajo es de tipo int a pesar de llegar a el por un puntero. (POR ESO EL OPERADOR FECHA)
    scanf("%d", &pEmp->legajo);

    printf("Ingrese nombre: ");
    //Aca no porque es un char ya es la dirección de memoria.
    setbuf(stdin, NULL);
    //gets (pemp->nombre);
    scanf("%s", pEmp->nombre);

    printf("Ingrese sexo: ");
    setbuf(stdin, NULL);
    scanf("%c", &pEmp->sexo);

    printf("Ingrese sueldo: ");
    scanf("%f", &pEmp->sueldo);



    printf("%d    %s    %c    %.2f", pEmp->legajo, pEmp->nombre, pEmp->sexo, pEmp->sueldo);









    ///////////////////////////

    eEmpleado* unEmpleado;
    eEmpleado* otroEmpleado;

    unEmpleado=new_Empleado();
    otroEmpleado=new_EmpleadoParam(222,"lucho", 'n', 40000);

    mostrarEmpleado(unEmpleado);
    mostrarEmpleado(otroEmpleado);



    return 0;
}

eEmpleado* new_Empleado(){

    eEmpleado* nuevo;

    nuevo=(eEmpleado*) malloc (sizeof(eEmpleado));

    if(nuevo!=NULL){

        nuevo->legajo=0;
        strcpy(nuevo->nombre,"");
        nuevo->sexo=' ';
        nuevo->sueldo=0;


    }

    return nuevo;
}

void mostrarEmpleado(eEmpleado* empleado){

        if (empleado!=NULL){

            printf("%d    %s    %c    %.2f", empleado->legajo, empleado->nombre, empleado->sexo, empleado->sueldo);

        }

}


eEmpleado* new_EmpleadoParam(int leg, char* nombre, char sexo, float sueldo){

    eEmpleado* nuevo;

    nuevo=(eEmpleado*) malloc (sizeof(eEmpleado));

    if(nuevo!=NULL){

        nuevo->legajo=leg;
        strcpy(nuevo->nombre,nombre);
        nuevo->sexo=sexo;
        nuevo->sueldo=sueldo;
    }

    }
