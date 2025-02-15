#include <stdio.h>
#include  <conio.h>

int main(){
    int v, sum=0;

    do{
        printf("Dime el saldo: ");
        scanf("%i", &v);
        if(v < 0){
            sum += v;
        }
    } while(v > 0);

    if(sum > 0){
        printf("Eres acreedor con %i en tu cuenta", sum);
    }else if(sum < 0){
        printf("Eres deudor con %i en tu cuenta", sum);
    }else{
        printf("Tienes cuenta nula");
    }
    getch();
    return 0;
}