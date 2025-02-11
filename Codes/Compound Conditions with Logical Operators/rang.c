#include <stdio.h>
#include <conio.h>

int main(){
    int n1, n2, n3, var, diff;
    printf("Dime 3 números\n");
    scanf("%i %i %i", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3){
        if(n2 > n3){
            diff = n1 - n3;
            printf("El mayor es %i y el menor es %i, y su diferencia es de %i", n1, n3, diff);
        }else{
            
            diff = n1 - n2;
            printf("El mayor es %i y el menor es %i, y su diferencia es de %i", n1, n2, diff);
        }
    }else if(n2 > n3){
        if(n3 > n1){
            diff = n2 - n1;
            printf("El mayor es %i y el menor es %i, y su diferencia es de %i", n2, n1, diff);
        }else{
            diff = n2 - n3;
            printf("El mayor es %i y el menor es %i, y su diferencia es de %i", n2, n3, diff);
        }
    }
    if(n3 > n2){
        if(n2 > n1){
            diff = n3 - n1;
            printf("El mayor es %i y el menor es %i, y su diferencia es de %i", n3, n1, diff);
        }else{
            diff = n3 - n2;
            printf("El mayor es %i y el menor es %i, y su diferencia es de %i", n3, n2, diff);
        }
    }
    getch();
    return 0;
}