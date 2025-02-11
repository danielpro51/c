#include <stdio.h>
#include <conio.h>

int main(){
    float promedio;

    printf("Ingresa tu promedio: ");
    scanf("%f", &promedio);

    if (promedio >= 4.5){
        printf("Sobresaliente");
    }else{
        if (promedio >= 3.4){
            printf("Regular");
        }else{
            printf("Reprobado");
        }
    }
    getch();
    return 0;
}