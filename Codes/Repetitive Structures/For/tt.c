#include <stdio.h>
#include <conio.h>

int mayorN(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }else if(b > a && b > c){
        return b;
    }else{
        return c;
    }
}
int menorN(int a, int b, int c){
    if(a < b && a < c){
        return a;
    }else if(b < a && b < c){
        return b;
    }else{
        return c;
    }
}

int main(){
    int i=1, nn, l1, l2, l3, equi=0, iso=0, esca=0;

    printf("Dime la cántidad de triángulos: ");
    scanf("%i", &nn);

    for(i; i <= nn; i++){
        printf("Dime el lado 1 del triángulo %i: ", i);
        scanf("%i", &l1);
        printf("Dime el lado 2 del triángulo %i: ", i);
        scanf("%i", &l2);
        printf("Dime el lado 3 del triángulo %i: ", i);
        scanf("%i", &l3);

        if(l1 == l2 && l2 == l3){
            equi++;
        }else if (((l1 == l2 && l2 != l3) || (l2 == l3 && l2 != l1) || (l3 == l2 && l3 != l1))){
            iso++;
        }else if(l1 != l2 && l2 != l3 && l1 != l3){
            esca++;
        }
    }
    printf("Triángulos equiláteros: %i\n", equi);
    printf("Triángulos isósceles: %i\n", iso);
    printf("Triángulos escalenos: %i\n", esca);
    printf("El que mayor tiene es %i\n", mayorN(equi, iso, esca));
    printf("El que menor tiene es %i\n", menorN(equi, iso, esca));
    getch();
    return 0;
}