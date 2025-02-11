#include <stdio.h>
#include <conio.h>

int main(){
    float num1, num2, sum, diff, prod, div;

    printf("Dime un primer número: ");
    scanf("%f", &num1);
    printf("Dime un segundo número: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    div = num1 / num2;

    printf("Suma %.2f\n", sum);
    printf("Resta %.2f\n", diff);
    printf("Multiplicación %.2f\n", prod);
    printf("Divisón %.2f\n", div);
    getch(); //Sirve para esperar a que el usuario presione una tecla; más efectivo que getchar();
    return 0;
}