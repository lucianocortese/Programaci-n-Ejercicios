#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int employee_setId(Employee* this,int id){//SETEALO

    int todoOk=0;
    if (this!= NULL/*ROBUSTES DE PROGRAMA*/ && id >0 && id<100000/*consistencia de edades*/){

        this->id = id;
        todoOk=1;
    }

    return todoOk;

}

int employee_getId(Employee* this,int* id){// DAME UN SUELDO

    int todoOk=0;

    if( this != NULL && id != NULL){
        todoOk =1;
        *id=this->id;


    }
    return todoOk;

}

Employee* employee_new(){

Emplyee* nuevoEmpleado = (Employee*)malloc (sizeof (Employee));

    if (nuevoEmpleado != NULL)
    {
        nuevoEmpleado->id =0;
        strcpy (nuevoEmpleado->nombre, "");
        nuevoEmpleado ->horasTrabajadas =0;
        nuevoEmpleado-> sueldo =0;

    }
    return nuevoEmpleado;
}

Employee* employee_newParametros(char* idStr/*pensado para que tiremos los buffers acá*/,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr){



    if (nuevoEmpleado != NULL){

        if (employee_setID (nuevoEmpleado, atoi (idStr))==1){
            if (employee_setNombres (nuevoEmpleado, nombreStr)==1){
                if (employee_setHorasTrabajadas (nuevoEmpleado, horasTrabajadasStr)==1){
                    if (employee_setSueldo (nuevoEmpleado, sueldoStr)==1){
                    }
                }

            }

        }
    }
    /*
    if (nuevoEmpleado != NULL)
    {
        nuevoEmpleado->id = atoi(idStr);
        strcpy (nuevoEmpleado->nombre, nombreStr);
        nuevoEmpleado ->horasTrabajadas =atoi(horasTrabajadasStr);
        nuevoEmpleado-> sueldo =0;

    }*/
    return nuevoEmpleado;

}


int employee_setSueldo(Employee* this,int sueldo){//SETEALO

    int todoOk=0;
    if (this!= NULL/*ROBUSTES DE PROGRAMA*/ && sueldo >0 && sueldo<100000/*consistencia de edades*/){

        this->sueldo = sueldo;
        todoOk=1;
    }

    return todoOk;

}

int employee_getSueldo(Employee* this,int* sueldo){// DAME UN SUELDO

    int todoOk=0;

    if( this != NULL && sueldo != NULL){
        todoOk =1;
        *sueldo=this->sueldo;


    }
    return todoOk;

}
