#include <stdio.h>
#include <conio.h>

int main(){
    int v=0, tallMProm=0, minMProm=0;
    float listaAltura[5], prom=0,sum=0;
    for(v; v < 5; v++){
        printf("Dime la altura: ");
        scanf("%f", &listaAltura[v]);
    }
    v=0;
    for(v; v < 5; v++){
        sum = sum + listaAltura[v];
    }
    prom = sum/5;
    v=0;
    for(v; v <= 5; v++){
        if(listaAltura[v] > prom){
            tallMProm++;
        }else{
            minMProm++;
        }
    }
    printf("El promedio: %0.2f, personas más altas que el promedio %i, más bajas que el promedio %i", prom, tallMProm, minMProm);
    getch();
    return 0;
}