#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "input.h"
#include "socios.h"
#define TAM_SOC 10
#define TAM_LIB 10
#define TAM_AUT 10
#define TAM_PRE 10



int main()
{

    eAutores autores[TAM_AUT];
    eLibros libros[TAM_LIB];
    eSocios socios [TAM_SOC];
    ePrestamos prestamos[TAM_PRE];

    inicializarSocios(socios, TAM_SOC);
    inicializarPrestamos (prestamos, TAM_PRE);

    int menu;
    int contId=0;
    int contIdPre=0;
    char continuar='N';
    int menuInf;
    char continuarInf = 'N';
    hardcodeo (autores, 10, libros, 10);



    do{

    printf("--------- ABM biblioteca-------\n");
    printf("1- Alta socio \n");
    printf("2- Modificar socio \n");
    printf("3- Baja socio \n");
    printf("4- Listar socios \n");
    printf("5- Listar libros \n");
    printf("6- Listar autores \n");
    printf("7- Alta prestamos\n");
    printf("8- Informes\n");
    printf("0- salir\n");

        getInt(&menu, "Ingrese una opcion: ", "No es una opcion valida, intente nuevamente",0,8);

        switch (menu){
            case 1:
                contId=altaSocio(socios, TAM_SOC, contId);
                break;
            case 2:
                modificarSocios(socios,TAM_SOC);
                break;
            case 3:
                bajaSocio(socios,TAM_SOC);
                break;
            case 4:
                ordenarPorApellido(socios,TAM_SOC);
                mostrarSocios (socios,TAM_SOC);
                break;
            case 5:
                ordenarPorTitulo (libros, TAM_LIB);
                mostrarLibros(libros, TAM_LIB);
                break;
            case 6:
                ordenarAutoresPorApellido(autores,TAM_AUT);
                mostrarAutores(autores, TAM_AUT);
                break;
            case 7:
                contIdPre=altaPrestamos(prestamos, TAM_PRE, contIdPre);
                break;
            case 8:
                do{
                    printf("--------- INFORMES ABM SOCIOS-------\n");
                    printf("1- Informar el total general y promedio diario de las solicitudes a prestamos de los libros\n");
                    printf("2- Informar la cantidad de dias cuya solicitud a prestamo NO superan el promedio del item anterior\n");
                    printf("3- Listar todos los socios que solicitaron el prestamo de un libro determinado \n");
                    printf("4- Listar todos los libros que fueron solicitados a prestamo por un socio determinado \n");
                    printf("5- Listar el/los socios que realizo/realizaron mas solicitudes a prestamo \n");
                    printf("6- Listar todos los socios que realizaron al menos una solicitud a prestamo en una fecha determinada \n");
                    printf("7- Listar todos los libros ordenados por titulo(descendente), utilizando el metodo de burbujeo mas eficiente\n");
                    printf("8- Listar todos los socios ordenados por apellido (ascendente), utilizando el metodo de insercion\n");
                    printf("0- salir\n");

                getInt(&menuInf, "Ingrese una opcion del menu",  "No es una opcion correcta", 0,8);

                switch (menuInf){
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 0:
                        getChar(&continuarInf, "Desea volver al menu de informes?[S/N]", "No es una opcion correcta", 'S', 'N');
                        break;
                }


                }while (continuarInf != 'S');

                break;
            case 0:
                getChar(&continuar, "Desea salir? (S/N)", "No es una opcion valida, probemos nuevamente", 'S', 'N');
                break;
                }
    }while (continuar=='N');





    return 0;
}

