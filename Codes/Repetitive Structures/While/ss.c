#include <stdio.h>
#include <conio.h>

/*Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc.*/

int main(){
    int x=1, n=11;
    while (x <= 25) {
        printf("%i ", n);
        n = n + 11;
        x++;
    };
    getch();
    return 0;
}