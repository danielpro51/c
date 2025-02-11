#include <stdio.h>
#include <conio.h>

int main(){
    int x=1,value,sum=0,prom;

    while (x <= 10){
        printf("Dime 10 números: ");
        scanf("%i", &value);
        sum = sum + value;
        x++;
    };
    prom = sum/10;
    printf("\nLa suma dio: %i\n", sum);
    printf("El promedio dio: %i\n", prom);
    getch();
    return 0;
}