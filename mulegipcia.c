#include <stdio.h>
int val1, val2, res, opc;

void main(){
    do{
        printf("Examen Final Multiplicacion Egipcia y Rusa.\n");
        printf("Opc 1: Egipcia\n");
        printf("Opc 2: Rusa\n");
        printf("Opc 3: Terminar programa\n");
        printf("Que opc desea: ");
        scanf("%d",&opc);
        switch (opc){
            case 1:
                printf("Multiplicacion Egipcia.\n");
                printf("Proporciones el primer valor: ");
                scanf("%d",&val1);
                printf("Proporciones el segundo valor: ");
                scanf("%d",&val2);
                res = egipcia(val1, val2);
                printf("%d",res);
                getch();
                break;
            case 2:
                printf("Funciona");
                break;
            case 3:
                printf("Precione una tecla para terminar el programa.");
                getch();
                break;
            default:
                printf("Opc Incorrecta preciones una tebla para regresar.");
                getch();
                break;
        }
    }while(opc!= 3);
}

int egipcia (int v1, int v2){
    int res;
    //Identificaar el mas chico
    if (v1 >= v2){
        
    }
    return res;
}