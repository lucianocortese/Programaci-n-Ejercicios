#include <stdio.h>
#include <stdlib.h>

int main()
{

    char letra= 'b';
    char  * punteroUno=&letra;
    char  ** doblePuntero=&punteroUno;
    char  *** triplePuntero=&doblePuntero;
    char  **** cuadruplePuntero=&triplePuntero;
    char  ***** quintupePuntero=&cuadruplePuntero;
    char  ****** sextuplePuntero=&quintupePuntero;
    char******* septimoPuntero=&sextuplePuntero;
    char******** octavoPuntero=&septimoPuntero;
    char********* novenoPuntero=&octavoPuntero;
    char********** decimoPuntero=&novenoPuntero;

    printf("%c\n",letra);
    printf("%c\n",*punteroUno);
    printf("%c\n",**doblePuntero);
    printf("%c\n",***triplePuntero);
    printf("%c\n",****cuadruplePuntero);
    printf("%c\n",*****quintupePuntero);
    printf("%c\n",******sextuplePuntero);
    printf("%c\n",*******septimoPuntero);
    printf("%c\n",********octavoPuntero);
    printf("%c\n",*********novenoPuntero);
    printf("%c\n",**********decimoPuntero);

    return 0;
}
