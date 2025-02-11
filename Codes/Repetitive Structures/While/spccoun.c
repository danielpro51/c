#include <stdio.h>
#include <conio.h>

int main(){
    int x=0, n;
    printf("Dime un número a contar ");
    scanf("%i", &n);

    while (x <= n){

        printf("%i ",x);
        x++;
    };
    getch();
    return 0;
}