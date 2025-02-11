#include <stdio.h>
#include <conio.h>

int main(){
    int n1, n2, n3;

    printf("Dime 3 números\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if((n1 < 10 && n2 < 10 && n3 < 10)){
        printf("Son menores a 10");
    }else{
        printf("No son menores a 10");
    }
    getch();
    return 0;
}