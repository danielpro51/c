//Primero se ejecuta el bloque y luego la condición
#include <stdio.h>
#include <conio.h>

int main(){
    
    int v;
    do{

        printf("Dime un número ");
        scanf("%i", &v);

        if(v >= 100){
            printf("Tiene 3 dígitos\n");
        }else if(v >= 10){
            printf("Tiene 2 dígitos\n");
        }else{
            printf("Tiene 1 dígito\n");
        }

    } while(v!=0);

    getch();
    return 0;
}