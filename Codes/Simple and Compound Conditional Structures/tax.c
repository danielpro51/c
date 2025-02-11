#include <stdio.h>
#include <conio.h>

int main(){
    int Sueldo;

    printf("Dime tu sueldo: ");
    scanf("%i", &Sueldo);

    if (Sueldo > 3000) {
        printf("Debes pagar impuestos\n");
    }else{
        printf("No debes pagar impuestos\n");
    }
    getch();
    return 0;
}