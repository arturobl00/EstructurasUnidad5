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
                egipcia(val1, val2);
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
    int x = 1;
    int valores[500];
    int cont = -1;
    float doble = 0.5;
    printf("Valor 1: %d, Valor 2: %d",v1, v2);
    //Identificaar el mas chico
    if (v1 >= v2){
        //Iniciar el valor mas pequeño en 1 y hacer ingrementos del doble hasta tener un valor mayor
        do{
            //printf("Doble vale %f",doble);
            doble = doble * 2;
            cont++;           
        }while (doble <= v2);
        //printf("%d", cont);
        doble = 0.5;
        cont = -1;
        do{
            doble = doble * 2;
            cont++;
            if (cont == 1){
                valores[cont] = v1;
            }else{
                valores[cont] = v1 * 2;
            }           
        }while (doble <= v2);
        getch();
    }
    else{
        //Iniciar el valor mas pequeño en 1 y hacer ingrementos del doble hasta tener un valor mayor
        do{
            //printf("Doble vale %f",doble);
            doble = doble * 2;
            cont++;           
        }while (doble <= v1);
        //printf("%d", cont);
        doble = 0.5;
        cont = -1;
        do{
            doble = doble * 2;
            cont++;
            if (cont == 1){
                valores[cont] = v2;
            }else{
                valores[cont] = v2 * 2;
            }           
        }while (doble <= v2);
        getch();
    }   
    for(x=1; x<=cont; x++){
        printf("\n %d ",valores[x]);
    }
}