#include <stdio.h>

int main(){
    int Lado;
    int Superficie;

    printf("Ingrese el lado del cuadrado: ");
    scanf("%i", &Lado);

    Superficie = Lado * Lado;

    printf("La superficie es: %i\n", Superficie);
    /*getchar();
    getchar();*/
    return 0;
}