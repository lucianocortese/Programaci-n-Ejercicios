#include <stdio.h>
#include <stdlib.h>
struct datosPersonales{
    char nombre[25];
    char apellido[25];
    char calle[30];
    int numero;
    };

int main()
{
    struct datosPersonales vecAgenda[3], vecAmigos[3], vecTrabajo[3] ;

    printf("********************AGENDA********************\n\n");
    for(int i=0; i<3; i++)
    {
        printf("\n\nIngrese nombre ");
        gets (vecAgenda[i].nombre);
        printf("Ingrese apellido ");
        gets (vecAgenda[i].apellido);
        printf("Ingrese calle ");
        gets (vecAgenda[i].calle);
        printf("Ingrese numero ");
        scanf("%d", &vecAgenda[i].numero);
        fflush(stdin);
    }


    return 0;
}


/*ESTRUCTURA 4

struct datosPersonales{ //la estructra se declara previo al main
    char nombre[25];
    char apellido[25];
    char calle[30];
    int numero;
    };

int main(){

struct datosPersonales vecAgenda[3];// EL VECTOR ES DEL TIPO ESTRUCTURAS QUE TIENE ADENTRO DISTINTOS TIPOS.

for (int i=0; i<3; i++){

    printf("\nIngrese el nombre ");
    gets (vecAgenda[i].nombre);
    printf("Ingrese el apellido ");
    gets (vecAgenda[i].apellido);
    printf("Ingrese la calle ");
    gets (vecAgenda[i].calle);
    printf("Ingrese numero de calle ");
    scanf("%d", &vecAgenda[i].numero);
    fflush(stdin);

}

for(int j=0; j<3; j++)
{
      printf("\nSu nombre es %s %s y vive en %s %d\n\n",vecAgenda[j].nombre,vecAgenda[j].apellido,vecAgenda[j].calle, vecAgenda[j].numero );
}

return 0;
};
*/


/*ESTRUCTURA 3

struct datosPersonales{ //la estructra se declara previo al main
    char nombre[25];
    char apellido[25];
    char calle[30];
    int numero;
    int codigoPostal;
    };


int main ()
{
    struct datosPersonales agenda;

    printf("**********************AGENDA***********************\n\n\n\n");

    printf("Ingrese el nombre ");
    gets (agenda.nombre);              // NO HAY QUE USAR GETS (SOLO POR HOY)
    fflush (stdin);

    printf("\Ingrese el apellido ");
    gets (agenda.apellido);
    fflush (stdin);

    printf("\Ingrese la calle ");
    gets (agenda.calle);
    fflush (stdin);

    printf("Ingrese numero de calle "); //Para agregar una columna se hace desde la estructura.
    scanf("%d", &agenda.numero);

    printf("Ingrese codigo postal ");
    scanf ("%d",&agenda.codigoPostal);



    printf("\n\n\nEl nombre es: %s ", agenda.nombre);
    printf("\nEl apellido es: %s ", agenda.apellido);
    printf("\nEl calle es: %s ", agenda.calle);
    printf("\nEl numero es: %d ", agenda.numero);
    printf("\nEl CP es: %d ", agenda.codigoPostal);

    return 000;
}

*/



/*ESTRUCTURA 2.

struct datosPersonales{ //la estructra se declara previo al main
    char nombre[25];
    char apellido[25];
    char calle[30];
    int numero;
    };

int main()                                  //Base de datos. Conjunto de tablas
                                            // dato = representacion grafica.  Información = la significación de un dato.
{
                                        //Declaracion de variable agenda de tipo "struct datosPersonales". --> El tipo de dato es TODO. un formato asignado previo al main.
    struct datosPersonales agenda;

        strcpy (agenda.nombre , "Yanina"); // con "strcpy" le damos el valor. Con el operador "PUNTO(.)" designamos que campo de la variable queremos ver.
        strcpy (agenda.apellido , "Scudero");
        strcpy (agenda.calle , "Avenida Mitre");
        agenda.numero = 750;

        printf("el nombre es: %s ", agenda.nombre);
        printf("\nEl apellido es: %s ", agenda.apellido);


    ;
    return 0;
}



*/



/*ESTRUCTURA 1

struct datosPersonales{ //la estructra se declara previo al main
    char nombre[25];
    char apellido[25];
    char calle[30];
    int telefono;
    };

int main() //Base de datos. Conjunto de tablas
           // dato = representacion grafica.  Información = la significación de un dato.
{
    //Declaracion de variable agenda de tipo "struct datosPersonales". --> El tipo de dato es TODO. un formato asignado previo al main.
    struct datosPersonales agenda;
    return 0;
}


*/
