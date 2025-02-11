#include <stdio.h>
#include <conio.h>

int main(){
    int x,y;
    printf("Dime las coordenadas del cuadrante x e y\n");
    scanf("%i %i", &x, &y);

    if (x > 0 && y > 0){
        printf("Está en el primer cuadrante");
    }else if(x < 0 && y > 0){
        printf("Está en el segundo cuadrante");
    }else if(x < 0 && y < 0){
        printf("Está en el tercer cuadrante");
    }else if(x > 0 && y < 0){
        printf("Está en el cuarto cuadrante");
    }else{
        printf("Coordenadas inválidas");
    }
    getch();
    return 0;
}