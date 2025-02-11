#include <stdio.h>
#include <conio.h>

int main(){
    int n1, n2, n3;
    printf("Ingresa 3 números:\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if ((n1 > n2) && (n1 > n3)) {
        printf("El mayor es %i", n1);
    }else if ((n2 > n1) && (n2 > n3)) {
        printf("El mayor es %i", n2);
    }else{
        printf("El mayor es %i", n3);
    }
    getch();
    return 0;
}