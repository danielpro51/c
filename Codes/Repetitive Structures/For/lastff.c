#include <stdio.h>
#include <conio.h>

int main(){
    int i=1, nn, sum=0;

    for(i; i <= 10; i++){
        printf("Dime un número: ");
        scanf("%i", &nn);
        if(i >5){
            sum+=nn;
        }
    }
    printf("La suma de los últimos 5 números es: %i\n", sum);
    getch();
    return 0;
}