#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a=0,e=0,i=0,o=0,u=0;
    char caracter;
    for (x=0;x<10;x++){

        printf("Ingrese un caracter:\n");

        /* setbuf(stdin, NULL); */
        scanf("%c",&caracter);

        while(getchar()!='\n');

        switch (caracter){
        case 'a': a++;
            break;
        case 'e': e++;
            break;
        case 'i': i++;
            break;
        case 'o': o++;
            break;
        case 'u': u++;
            break;
        default:break;
        }


    }
    printf("La cantidad de caracteres:\n a:%d \n e:%d \n i:%d \n o:%d \n u:%d",a,e,i,o,u);
    return 0;
}

