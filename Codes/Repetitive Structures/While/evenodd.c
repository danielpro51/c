#include <stdio.h>
#include <conio.h>

int main(){
    int n ,x=1,even=0,odd=0;
    printf("Dime un número ");
    scanf("%i", &n);

    while (x <= n){

        if (x%2 == 0){
            even++;
            printf("El número %i es par\n", x);
        }else{
            odd++;
            printf("El número %i es impar\n", x);
        }
        x++;
    };
    printf("Hay %i números pares y %i números impares", even, odd);
    getch();
    return 0;
}