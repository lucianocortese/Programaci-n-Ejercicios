#include <stdio.h>
#include <stdlib.h>
#include <strin.h>

int main()
{
  FILE* f;
  int id;
  char nombre[50];
  char apellido [50];
  float sueldo;
  int cant;

  char cad1[20];
  char cad2[20];
  char cad3[20];
  char cad4[20];

  f= fopen("./ABM.txt", "wr");

  if(f==NULL){

    printf("No se pudo abrir el archivo, me voy a cerrar\n");
  }

  cant = fscanf (f, "%[^,]%[^,]%[^,]%[^\n]", atoi (cad1), cad2, cad3, atof(cad4));
   return 0;
}


eEmpleado* new_Empleado(int leg, char* nombre, char* apellido, float sueldo){

eEmpleado* emp= (eEmpleado*)malloc (sizeof(eEmpleado));

if(emp!=NULL){
emp->legajo = 0;
strcpy (emp->nombre, "");
strcpy (emp->apellido, "");
emp->sueldo=0;

}

}
