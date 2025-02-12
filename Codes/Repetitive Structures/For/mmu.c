#include <stdio.h>
#include <conio.h>

int main(){
    int i, nn;

    printf("Dime un número: ");
    scanf("%i", &nn);

    /*for(i; i <= 13; i++){
        printf("%i * %i = %i\n", nn, i, nn * i);
    }*/
   //Empieza desde nn y termina en nn*13, aumentando nn veces; como el valor de nn es 5, el ciclo empieza en 5 y termina en 65, aumentando de 5 en 5.
    for(i=nn; i <= nn*13; i=i+nn){
        printf("%i\n", i);
    }
    getch();
    return 0;
}