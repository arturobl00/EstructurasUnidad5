#include <stdio.h>
#include <math.h>
int a, b, res, opc;

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
                scanf("%d",&a);
                printf("Proporciones el segundo valor: ");
                scanf("%d",&b);
                egipcia(a, b);
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

int egipcia (int va, int vb){
    int fin = 1;
    int pos = 1;
    if(va < vb){
        printf("%d",fin);
        getch();
        do{
            fin = fin * 2;
            if(fin <= va){
                printf("%d",fin);
                pos++;
                getch();
            }
        }while(fin<=va);
        fin = fin / 2;
        printf("de tantas pos %d",pos);
        getch();
        egipcia2(pos, vb);
    }
}

int egipcia2 (int pos, int vb){
    printf("\n");
    int arreglo[2][pos];
    int x;
    int fin = 1;
    for (x=0; x<pos; x++){
        arreglo[0][x] = fin;
        arreglo[1][x] = vb;

        fin = fin *2;
        vb = vb * 2;       
    }

    for(x=0; x<pos; x++){
        printf("%d - %d\n",arreglo[0][x], arreglo[1][x]);
    }   
    getch();
}