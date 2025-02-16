#include <stdio.h>
#include <conio.h>
int main(){
    int v=0, sueldos[5];

    for(v = 0; v <= 5; v++){
        printf("Dime el valor del sueldo %i: ", v);
        scanf("%i", &sueldos[v]); // + 1 para que no aparezca desde 0
    }
    printf("Listado de sueldos\n");

    for(v = 0; v < 5; v++){
        printf("%i\n", sueldos[v]);
    }
    getch();
    return 0;
}