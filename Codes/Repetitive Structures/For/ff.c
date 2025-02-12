#include <stdio.h>
#include <conio.h>

int menorN(int a, int b, int c){
    if(a < b && a < c){
        return a;
    }else if(b < a && b < c){
        return b;
    }else{
        return c;
    }
}

void promedio(int *promedio, int edad){
    int suma=0,i=1,n;
    for(i; i <= edad; i++){
        printf("Dime la edad del estudiante %i: ", i);
        scanf("%i", &n);
        suma += n;
    }
    *promedio = suma/edad;
}

int main(){
    int eM=5,eT=6,eN=11,prom1=0,prom2=0,prom3=0;

    printf("Dime las edades de los estudiantes de la mañana\n");
    promedio(&prom1, eM);
    printf("El promedio de edad de la mañana es: %i\n", prom1);
    
    printf("Dime las edades de los estudiantes de la tarde\n");
    promedio(&prom2, eT);
    printf("El promedio de edad de la tarde es: %i\n", prom2);
    
    printf("Dime las edades de los estudiantes de la noche\n");
    promedio(&prom3, eN);
    printf("El promedio de edad de la noche es: %i\n", prom3);

    printf("La menor edad en promedio es %i\n", menorN(prom1, prom2, prom3));
    getch();
    return 0;
}