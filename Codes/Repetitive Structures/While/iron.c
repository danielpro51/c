#include <stdio.h>
#include <conio.h>

int main(){
    int x=1,cant=0,n;
    float length;
    printf("Ingrese las piezas a confeccionar ");
    scanf("%i", &n);
    while (x <= n){
        printf("Dime la longitud de las piezas ");
        scanf("%f", &length);

        if(length >= 1.20 && length <= 1.30){
            cant++;
        };
        x++;
    };
    printf("\nCantidades aptas: %i\n", cant);
    getch();
    return 0;
}