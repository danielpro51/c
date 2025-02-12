#include <stdio.h>
#include <conio.h>

int main(){
    int i=1,pro=0,nub=0,notas;

    for(i; i<= 10; i++){
        printf("Ingrese la nota: ");
        scanf("%i", &notas);
        if(notas >= 7){
            pro++;
        }else{
            nub++;
        }
    }
    printf("La cantidad de alumnos aprobados es: %i\n", pro);
    printf("La cantidad de alumnos desaprobados es: %i\n", nub);
    getch();
    return 0;
}