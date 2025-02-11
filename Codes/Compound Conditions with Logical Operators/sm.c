#include <stdio.h>
#include <conio.h>

int main(){
    int n1, n2, n3, sum, prosum;

    printf("Dime 3 números\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if((n1 == n2 && n1 == n3)){
        sum = n1+ n2;
        prosum = sum * n3;
        printf("El resultado es %i", prosum);
    }else{
        printf("No son iguales");
    }
    getch();
    return 0;
}