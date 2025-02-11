#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    printf("Ingresa un número: ");
    scanf("%i", &n);

    if (n <= 9){
        printf("El número tiene un dígito\n");
    
    }else if (n <= 99){
        printf("El número tiene dos dígitos\n");
    };
    getch();
    return 0;
}