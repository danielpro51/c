#include <stdio.h>
#include <conio.h>

int main(){
    int i=1, value, posi=0,nega=0,m15=0,even=0;

    for(i; i <= 10; i++){
        printf("Dime un número entero: ");
        scanf("%i", &value);
        if (value > 0){
            posi++;
        }else if(value < 0){
            nega++;
        }
        if (value % 15 == 0){
            m15++;
        }
        if (value % 2 == 0){
            //even = even + value;
            even += value;
        }
    }
    printf("Hay %i números positivos\n", posi);
    printf("Hay %i números negativos\n", nega);
    printf("Hay %i números múltiplos de 15\n", m15);
    printf("La suma de los pares dio %i\n", even);
    getch();
    return 0;
}