#include <stdio.h>
#include <stdlib.h>

typedef struct {
int legajo;
char nombre [20];
char sexo;
float sueldo;
}eEmpleado;


int main()
{
    char sexo;

    eEmpleado unEmpleado = {1234, "Juan", 'm', 30000};
    eEmpleado* punteroEmp;
    punteroEmp= &unEmpleado;
    printf("Legajo: %s\n", (*punteroEmp++));

    return 0;
}

void getCharacter(char* message, char* caracter){//Son dos punteros a char, uno es de string y el otro de char.

    printf("%s", message);
    fflush(stdin);
    scanf("%c", caracter);

}


void mostrarCadena (char* cadena){

    while(*cadena!= '\0'){

        printf("%c", *cadena);
        cadena++;
    }

}
