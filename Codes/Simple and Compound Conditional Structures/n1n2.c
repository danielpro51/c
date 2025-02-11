#include <stdio.h>
#include <conio.h>

int main(){
    float n1, n2;

    printf("Dime un primer número: ");
    scanf("%f", &n1);
    printf("Dime un segundo número: ");
    scanf("%f", &n2);

    if (n1 > n2){
        printf("%.2f es mayor a %.2f\n", n1, n2);
    }else if (n2 > n1){
        printf("%.2f es mayor a %.2f\n", n2, n1);
    }else{
        printf("Son iguales\n");
    };
    getch();
    return 0;
    
}