#include <stdio.h>
#include <conio.h>

int main(){
    int A, B, C, D, Suma, Promedio;

    printf("Dime el primer número: ");
    scanf("%i", &A);
    printf("Dime el segundo número: ");
    scanf("%i", &B);
    printf("Dime el tercer número: ");
    scanf("%i", &C);
    printf("Dime el cuarto número: ");
    scanf("%i", &D);

    Suma = A + B + C + D;
    Promedio = Suma / 4;
    printf("La suma es %i y el promedio es %i\n", Suma, Promedio);
    getch();
    return 0;
}