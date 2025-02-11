#include <stdio.h>
#include <conio.h>

int main (){
    int A, B, C, D, Suma, Producto;

    printf("Dime el primer número: ");
    scanf("%i", &A);
    printf("Dime el segundo número: ");
    scanf("%i", &B);
    printf("Dime el tercer número: ");
    scanf("%i", &C);
    printf("Dime el cuarto número: ");
    scanf("%i", &D);

    Suma = A + B;
    Producto = C * D;

    printf("La suma es %i y el producto es %i\n", Suma, Producto);
    getch();
    return 0;
}