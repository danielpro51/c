#include <stdio.h>
#include <conio.h>

int main(){
    int a;
    printf("Dime un número: ");
    scanf("%i", &a);

    if (a < 10){
        printf("El número tiene un dígito\n");
    } else if (a < 100){
        printf("El número tiene dos dígitos\n");
    } else if (a < 1000){
        printf("El número tiene tres dígitos\n");
    } else {
        printf("El número tiene más de tres dígitos\n");
    }
    getch();
    return 0;
}