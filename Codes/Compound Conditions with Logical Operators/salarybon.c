#include <stdio.h>
#include <conio.h>

int main(){
    int sueldo, antg, aum;
    printf("Ingrese el sueldo y su tiempo trabajando\n");
    scanf("%i %i", &sueldo, &antg);

    if(sueldo >= 500){
        printf("No hubo aumentos");
    }else if(antg >= 10){
        aum = (sueldo * 0.20) + sueldo;
        printf("Aumento %i", aum);
    }else{
        aum = (sueldo * 0.05) + sueldo;
        printf("Aumento %i", aum);
    }
    getch();
    return 0;
}