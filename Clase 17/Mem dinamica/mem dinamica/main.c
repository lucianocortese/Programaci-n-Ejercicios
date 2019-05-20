#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* pNum;
    int* pVec;

    pNum = (int*) malloc(sizeof(int));
    //pedis espacio y malloc avisa si consiguió.
    //si no hay espacio devuelve "NULL" el espacio de memoria vacio - el NO puntero.
    //casteas la función porque malloc devuelve el puntero generico.
    //verificar que no sea nulo. Eso haria el problema mas robusto.
     if(pNum==NULL) {
            system("pause");
            printf("No se consiguio memoria");
            exit (1);
        }

    *pNum=12;
     //Con asterisco puntero guardas un valor.
    printf("%p\n", pNum);

    printf("%d\n", *pNum);
    free(pNum);
    //vuelve a liberar el espacio que se usó.
        pVec = (int*) malloc(sizeof(int)*8);
        if(pVec==NULL) {
                system("pause");
                printf("No se consiguio memoria");
                exit (1);
            }
        for(int i=0;i<8;i++){
        //Recorres y pedis el ingreso de numeros
        // No usa "&", ya la variable puntero guardauna direccion de memoria
            printf("Escriba un numero: ");
            scanf("%d", (pVec+i));
        }

        for(int i=0;i<8;i++){
        //Recorres y mostras los valores.
            printf("%d ", *(pVec+i));
            printf(".");
        }
        int* pAux;
        pAux=pNum;

        pAux=(int*)realloc (pNum, sizeof(int)*15);
        if(pAux!=NULL){
            pNum=pAux;
        }
        else{
            printf("No hay lugar en memoria");
            exit(1);
        }

        for(int i=8;i<15;i++){
        //Recorres y pedis el ingreso de numeros
        // No usa "&", ya la variable puntero guardauna direccion de memoria
            printf("\nEscriba los numeros siguientes ");
            scanf("%d", (pVec+i));
        }

        for(int i=0;i<15;i++){
        //Recorres y mostras los valores.
            printf("%d ", *(pVec+i));
            printf(".");
        }
    return 0;
}
