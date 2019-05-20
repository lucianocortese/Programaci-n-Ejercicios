#include <stdio.h>
#include <stdlib.h>


typedef struct {

int legajo;
char nombre[20];
char sexo;
float sueldo;

}eEmpleado;


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
    return 0;
}
