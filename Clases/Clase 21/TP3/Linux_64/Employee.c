#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>

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


