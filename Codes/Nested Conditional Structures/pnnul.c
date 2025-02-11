#include <stdio.h>
#include <conio.h>

int main(){
    int a;
    printf("Dime un número: ");
    scanf("%i", &a);

    if (a > 0){
        printf("Es positivo");
    }else if (a < 0){
        printf("Es negativo");
    }else{
        printf("Es nulo");
    }
    getch();
    return 0;
}