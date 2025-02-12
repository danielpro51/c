#include <stdio.h>
#include <conio.h>

void cuadrante(int n, int x, int y){
    int cuadrante1=0, cuadrante2=0, cuadrante3=0, cuadrante4=0;
    int i=1;
    for(i; i <= n; i++){
        printf("Dime las coordenadas del punto x%i e y%i: ", i);
        scanf("%i %i", &x, &y);
        if (x > 0 && y > 0){
            cuadrante1++;
        }else if(x < 0 && y > 0){
            cuadrante2++;
        }else if(x < 0 && y < 0){
            cuadrante3++;
        }else if(x > 0 && y < 0){
            cuadrante4++;
        }else{
            printf("Coordenadas inválidas");
        }
    }
    printf("En el cuadrante 1 hay %i puntos\n", cuadrante1);
    printf("En el cuadrante 2 hay %i puntos\n", cuadrante2);
    printf("En el cuadrante 3 hay %i puntos\n", cuadrante3);
    printf("En el cuadrante 4 hay %i puntos\n", cuadrante4);
}

int main(){
    int nn, x=0,y=0;

    printf("Dime la cantidad de puntos: ");
    scanf("%i", &nn);
    cuadrante(nn, x, y);
    getch();
    return 0;
}