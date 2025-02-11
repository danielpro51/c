#include <stdio.h>
#include <conio.h>

/*En una empresa trabajan n empleados cuyos sueldos oscilan entre 100 y 500
realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos cobran entre 100 y 300 y cuántos más de 300
además, el programa deberá informar el importe que gata la empresa en sueldos al personal*/

int main(){
    int n, sueldo, sueldoM=0, sueldom=0,x=1, gastos=0;
    
    printf("Dime la cantidad de empleados ");
    scanf("%i", &n);
    while (x <= n) {
        printf("Dime el sueldo ");
        scanf("%i", &sueldo);
        if (sueldo >= 100 && sueldo <= 300){
            sueldom++;
        }else if (sueldo > 300){
            sueldoM++;
        };
        gastos = gastos + sueldo;
        x++;
    };
    printf("\nLa cantidad de empleados que cobran entre 100 y 300 son %i y los que cobran mas de 300 son %i\n", sueldom, sueldoM);
    printf("El importe que gasta la empresa en sueldos al personal es %i\n", gastos);
    getch();
    return 0;
}