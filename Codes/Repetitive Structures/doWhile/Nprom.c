#include <stdio.h>
#include <conio.h>

int main(){
    int suma=0,cant=0, v;
    do{
        printf("Dime la cantidad de números a sacar promedio (0 finaliza)\n");
        scanf("%i", &v);
        suma += v;
        cant++;
    } while(v!=0);
    if(cant != 0){
        printf("El promedio es: %i\n", suma/cant);
    }else{
        printf("No se puede dividir entre 0\n");
    }

    getch();
    return 0;
}