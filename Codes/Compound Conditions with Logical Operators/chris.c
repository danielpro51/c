#include <stdio.h>
#include <conio.h>

int main(){
    int d, m;
    printf("Dime un día y un mes\n");
    scanf("%i %i", &d, &m);

    if (d == 24 && m == 12){
        printf("Es navidad");
    }else{
        printf("No es navidad");
    }
    getch();
    return 0;
}