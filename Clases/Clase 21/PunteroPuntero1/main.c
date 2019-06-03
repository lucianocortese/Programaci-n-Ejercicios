#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int legajo;
    char nombre[20];
    char apellido[20];
    float sueldo;
}eEmpleado;

void mostrarEmpleados(eEmpleado** lista, int len);
eEmpleado* new_EmpleadoParam( int leg, char* nombre, char* apellido, float sueldo);
eEmpleado* new_Empleado();
int guardarEmpleadosCSV (eEmpleado** lista, int tam, char* path);

int main()
{
     FILE* f;

     char buffer[4][20];
     eEmpleado** lista = (eEmpleado**) malloc(sizeof(eEmpleado*));
     eEmpleado** pAuxEmpleado;
     int cont = 0;
     int cant;

    f = fopen("./empleados.bin","rb");

    if(f == NULL){
        printf("No se pudo abrir el archivo. Me voy a cerrar.\n");
        system("pause");
        exit(EXIT_FAILURE);
    }

    //fscanf(f, "%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3]);
    //printf("%s   %s    %s    %s\n\n", buffer[0], buffer[1], buffer[2], buffer[3]);



     while( !feof(f) ){

        //cant = fscanf(f, "%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3]);
        eEmpleado* nuevoEmpleado = newEmpleado();
        if(nuevoEmpleado==NULL){
        exit(1);

        }
        cant = fread(nuevoEmpleado, sizeof(eEmpleado), 1, f);
     if( cant < 1){
        break;
      }

      *(lista+cont) = nuevoEmpleado;
      //eEmpleado* nuevoEmpleado = new_EmpleadoParam(atoi(buffer[0]), buffer[1],buffer[2],atof(buffer[3]));

     // *(lista + cont) = *nuevoEmpleado;

      *(lista + cont) = nuevoEmpleado;
    cont++;

    pAuxEmpleado = (eEmpleado**) realloc(lista, sizeof(eEmpleado*) *(cont+1));
    if(pAuxEmpleado == NULL){
        exit(1);
    }
    lista = pAuxEmpleado;
              //printf(" %5d   %10s   %20s  %8.2f\n", atoi(buffer[0]), buffer[1], buffer[2], atof(buffer[3]));
    }

    mostrarEmpleados(lista, cont);



    fclose(f);

    if (listarParaImprimir (lista, cont, "ListaEmpleados.txt")){
        printf ("Se ha impreso la lista");
    }
    else {
        printf ("Problemas al imprimir");
    }
       if (guardarEmpleadosCSV (lista, cont, "empleados 2")){
        printf ("Se han guardado los empleados en csv");
    }
    else {
        printf ("Problemas al guardar");
    }

    if (guardarEmpleadosBin (lista, cont, "empleados 3")){
        printf ("Se han guardado los empleados en binario");
    }
    else {
        printf ("Problemas al guardar en binario");
    }



    return 0;
}


void mostrarEmpleados(eEmpleado** lista, int len){

for(int i=0; i < len; i++){
    printf(" %5d   %10s   %20s  %8.2f\n", (*(lista + i))->legajo, (*(lista + i))->nombre, (*(lista + i))->apellido, (*(lista + i))->sueldo);
}
printf("\n\n");

}
eEmpleado* newEmpleado(){

eEmpleado* emp = (eEmpleado*)malloc( sizeof(eEmpleado));

if(emp != NULL){
    emp->legajo = 0;
    strcpy(emp->nombre, "");
    strcpy(emp->apellido, "");
    emp->sueldo = 0;

}
return emp;
}
eEmpleado* newEmpleadoParam( int leg, char* nombre, char* apellido, float sueldo){

eEmpleado* emp = (eEmpleado*)malloc( sizeof(eEmpleado));

if(emp != NULL){
    emp->legajo = leg;
    strcpy(emp->nombre, nombre);
    strcpy(emp->apellido, apellido);
    emp->sueldo = sueldo;

}
return emp;
}
int listarParaImprimir(eEmpleado** lista, int tam, char* path){
    int todoOk=1;

    FILE* f = fopen(path, "w"); //puntero a archivo que lo abris con fopen.
    if (f == NULL){
        todoOk=0;
    }

    fprintf(f, "Listado de Empleados \n\n");
    fprintf(f, "Legajo Nombre Apellido Sueldo \n\n");



    for(int i=0; i < tam; i++){
        fprintf(" %5d   %10s   %20s  %8.2f\n", (*(lista + i))->legajo, (*(lista + i))->nombre, (*(lista + i))->apellido, (*(lista + i))->sueldo);
    }
    printf("\n\n");


    return todoOk;
}
int guardarEmpleadosCSV (eEmpleado** lista, int tam, char* path){ //vamos a pasar del txt al SCV
    int todoOk=1;
    char ext[]= ".csv"; // pones la extension para agregarsela.
    char nombreArchivo[100];
    strcpy (nombreArchivo, path);
    strcat (nombreArchivo, ext); // concatenas el nombre del archivo con la extencion.


    FILE* f = fopen(nombreArchivo, "w"); //puntero a archivo que lo abris con fopen.
    if (f == NULL){
        todoOk=0;
    }


    fprintf(f, "id,first_name,last_name, sueldo \n\n");



    for(int i=0; i < tam; i++){
        fprintf(f," %d,%s,%s,%.2f\n", (*(lista + i))->legajo, (*(lista + i))->nombre, (*(lista + i))->apellido, (*(lista + i))->sueldo);
    }
    printf("\n\n");


    return todoOk;
}
int guardarEmpleadosBin (eEmpleado** lista, int tam, char* path){ //vamos a pasar del txt al SCV
    int todoOk=1;
    char ext[]= ".bin"; // pones la extension para agregarsela.
    char nombreArchivo[100];
    strcpy (nombreArchivo, path);
    strcat (nombreArchivo, ext); // concatenas el nombre del archivo con la extencion.


    FILE* f = fopen(nombreArchivo, "wb"); //es en binario
    if (f == NULL){
        todoOk=0;
    }



    for(int i=0; i < tam; i++){
        //ENBINARIO ESTO NO VA --fprintf(f," %d,%s,%s,%.2f\n", (*(lista + i))->legajo, (*(lista + i))->nombre, (*(lista + i))->apellido, (*(lista + i))->sueldo);
        fwrite(*(lista+i),sizeof(eEmpleado), 1, f);
        /*PARAMETROS:
            1:parametro a void
            2:tamaño
            3: cantidad de estructuras.
            4: archivo
        */

    }
    printf("\n\n");


    return todoOk;
}

