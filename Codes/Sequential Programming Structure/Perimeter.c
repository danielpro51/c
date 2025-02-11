#include <stdio.h>
#include <conio.h>

int main(){
    int Lado, Perimetro;

    printf("Dime el lado: ");
    scanf("%i", &Lado);
    
    Perimetro = Lado * 4;
    printf("El lado es %i\n", Perimetro);
    getch();
    return 0;
}