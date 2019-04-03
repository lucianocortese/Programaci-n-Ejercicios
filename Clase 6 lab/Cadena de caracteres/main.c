#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena [50];//STRING. LA DIFERENCIA ES QUE HAY UN FINAL DE CADENA MARCADO POR '/0'. SE DECLARAN NECESARIOS MAS 1.
    fflush(stdin);              //LIMPIEZA DE BUFFER O STEBUF (NULL, stdin);



    //scanf ("%s", cadena);     //SIN "&" PORQUE UN VECTOR YA ES UNA DIRECCION DE MEMORIA. NO TOMA UN ESPACIO //scanf (%s, &cadena[3]) ESTO ES LA DIRECCIÒN DE MEMORIA DEL TERCER INDICE DE LA CADENA.



    //gets(cadena);             //SIRVE PERO NO SE USA.



                                                    // Cuando hay F trabaj con archivos(files)
    fgets(cadena, sizeof(cadena)-2,stdin);          //fgets agrega un \0 por ende tenemos que forzar un "\0"
                                                    //SIZEOF es un operador (NO FUNCION). CANTIDAD DE CARACTERES QUE OCUPA ALGO.

                                                    // FORZAS RESTANDO 2 A LA CANTIDAD DE CARACTERES DEL VECTOR. """"(sizeof-2)""""
                                                    //DE MEMORIA STDIN. QUE ES LA ENTRADA ESTANDARD.







    printf("%s", cadena);

    return 0;
}
