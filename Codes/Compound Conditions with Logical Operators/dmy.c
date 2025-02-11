#include <stdio.h>
#include <conio.h>

int main(){
    int d,m,y;
    printf("Dime un día, mes y año\n");
    scanf("%i %i %i", &d, &m, &y);

    if (m == 1 || m == 2 || m == 3){
        printf("Corresponde al primer trimestre del año");
    }else{
        printf("No corresponde al primer trimestre");
    }
    getch();
    return 0;
}