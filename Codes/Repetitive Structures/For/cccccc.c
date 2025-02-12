#include <stdio.h>
#include <conio.h>

int main(){
    int i=1, n,v,cc=0;

    printf("Dime un número: ");
    scanf("%i", &n);

    for(i; i <= n; i++){
        printf("Dime un número: ");
        scanf("%i", &v);
        if(v >= 1000){
            cc++;
        }
    }
    printf("La cantidad de números mayores o iguales a 1000 es: %i\n", cc);
    getch();
    return 0;
}