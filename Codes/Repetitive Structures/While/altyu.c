#include <stdio.h>
#include <conio.h>

int main(){
    int c=1, n;
    float altura, x;

    printf("Dime la cantidad de personas ");
    scanf("%i", &n);

    while (c <= n){
        printf("Dime la altura ");
        scanf("%f", &altura);
        x = x + altura;
        c++;
    };
    printf("\nEl promedio de la altura es %.2f\n", x/n);

    getch();
    return 0;
}