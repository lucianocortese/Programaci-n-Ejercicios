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
            printf("\n");
        for(int i=0;i<8;i++){
        //Recorres y mostras los valores.
            printf("%d ", *(pVec+i));
            printf(".");
        }



        int* pAux;

        pAux=pVec;

        pAux=(int*)realloc (pVec, sizeof(int)*15);
        //extendes la cantidad de espacio en memoria
        //busca mas lugar en donde está y devuelve el viejo lugar de memoria
        //si no hay lugar en donde estaba lo pasa a un nuevo lugar y devuelve el nuevo lugar de memoria
        //si no encuentra lugar devuelve Null.
        //El auxiliar existe porque de no encontrar lugar y devolver null. Si dejasemos el puntero que ya tenemos lo perderiamos.
        //-por ese motivo con el auxiliar no perdemos ese valor

        if(pAux!=NULL){
            pVec=pAux;
            //Si pAux no es Null podes darle el valor del auxiliar a la variable con la que trabajamos
        }
        else{
            printf("No hay lugar en memoria");
            exit(1);
            //exit: termina el programa en ejecución.
        }


        for(int i=8;i<15;i++){
        //Recorres y pedis el ingreso de numeros desde el que habias dejado con malloc.
        // No usa "&", ya la variable puntero guardauna direccion de memoria
            printf("Escriba los numeros siguientes ");
            scanf("%d", (pVec+i));
        }

        for(int i=0;i<15;i++){
        //Recorres y mostras los valores.
            printf("%d ", *(pVec+i));
            printf(".");
        }



        //FUNCIÓN CALLOC-------------

        int* vector;

        vector = (int*) calloc(10,sizeof(int)*10);
        for(int i=0;i<10;i++){

        printf("%d, ", *(vector+i));


        }






    return 0;
}
