#include <stdio.h>
#include <conio.h>

int main(){
    int sum=0,v;
    do{
        printf("Dime un número (9999 finaliza): ");
        scanf("%i",&v);
        if(v != 9999){
            sum+=v;
        }
    }while(v!=9999);

    if(sum == 0){
        printf("El número es 0\n");
    }else if(sum > 0){
        printf("La suma de los números ingresados positivos es %i\n",sum);
    }else{
        printf("La suma de los números ingresados negativos es %i\n",sum);
    }
    getch();
    return 0;
}