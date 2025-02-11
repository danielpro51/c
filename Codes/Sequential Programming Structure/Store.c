#include <stdio.h>
#include <conio.h>

int main(){
    float Articulo, Importe;
    int CantidadCliente;
    
    printf("Dime el precio del artículo: ");
    scanf("%f", &Articulo);
    printf("Dime la cantidad que deseas llevar: ");
    scanf("%i", &CantidadCliente);
    Importe = Articulo * CantidadCliente;
    printf("El precio total es %.2f\n", Importe);
    /*
    Abono = Articulo - CantidadCliente;
    printf("La cantidad que debes abonar es %f\n", Abono);*/
    getch();
    return 0;

}