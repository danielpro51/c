#include <stdio.h>
#include <conio.h>

int main(){
    float turnos[8];
    int v=0;

    for(v; v < 8; v++){
        if((v) < 4){ //Inicia en 0, => 3 = 4
            printf("Dime los sueldos de la mañana: ");
            scanf("%f", &turnos[v]);
        }else if(v < 8){
            printf("Dime los sueldos de la tarde: ");
            scanf("%f", &turnos[v]);
        }

    }
    v=0;
    for(v; v < 8; v++){
        printf("%0.2f\n", turnos[v]);
    }
    getch();
    return 0;
}