#include <stdio.h>
#include <conio.h>

int main(){
    int n1, n2, sum, diff, prod, div;

    printf("Dime el primer número: ");
    scanf("%i", &n1);
    printf("Dime el segundo número: ");
    scanf("%i", n2);

    if (n1 > n2){
        sum = n1 + n2;
        diff = n1 - n2;
        printf("El resultado de la suma y resta son: %i y %i\n", sum, diff);
    }else if (n2 > n1){
        prod = n1 * n2;
        div = n1 / n2;
        printf("El resultado de la división y multiplicación son: %i y %i\n", prod, div);
    };
    getch();
    return 0;
}