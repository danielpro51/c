#include <stdio.h>
#include <conio.h>

int main(){
    double peso1=9.8,peso2=10.2, v;
    int cant1=0,cant2=0,cant3=0;
    do{
        printf("Dime el peso de la pieza (0 finaliza)\n");
        scanf("%lf", &v); //%lf para double
        if(v >= peso1 && v <= peso2){
            cant1++;
        }else if(v > peso2){
            cant2++;
        }else if(/*v < peso1 para no contar al 0*/v > 0){
            cant3++;
        }
    } while(v != 0);
    if(cant1 != 0){
        printf("Piezas en el rango de peso 9.8kg y 10.2kg: %i\n", cant1);
        printf("Piezas por encima del rango de peso 10.2kg: %i\n", cant2);
        printf("Piezas por debajo del rango de peso 9.8kg: %i\n", cant3);
        printf("Piezas totales: %i\n", cant1+cant2+cant3);
    }else{
        printf("No se puede dividir entre 0\n");
    }

    getch();
    return 0;
}