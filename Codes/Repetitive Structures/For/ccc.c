#include <stdio.h>
#include <conio.h>

int main(){
    int i=1,suma=0,prom=0,valor;
    for(i; i<= 10; i++){
        printf("Ingrese un valor: ");
        scanf("%i", &valor);
        suma = suma + valor;
    }
    prom = suma / 10;
    printf("La suma de los valores es: %i\n", suma);
    printf("El promedio de los valores es: %i\n", prom);
}