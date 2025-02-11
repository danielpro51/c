#include <stdio.h>
#include <conio.h>

int main(){
    int x=1,pro=0,nob=0;
    float notas;
    while (x <= 10){
        printf("Dime las notas ");
        scanf("%f", &notas);

        if (notas >= 4.0){
            pro++;
        }else{
            nob++;
        };
        x++;
    };

    printf("\nCantidad de notas buenas son %i y de notas malas %i\n", pro, nob);
    getch();
    return 0;
}