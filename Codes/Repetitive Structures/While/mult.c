#include <stdio.h>
#include <conio.h>

int main(){
    int n=8, x=1;

    while (x <= 500){
        printf("%i x %i = %i\n", n, x, n*x);
        x++;
    };
    getch();
    return 0;
}