#include <stdio.h>
#include <conio.h>

int main (){
    int lista1,lista2, n=1;

    while (n <= 15)
    {
        printf("Dime la primera lista de 15 elementos ");
        scanf("%i", &lista1);
        lista1 = lista1 + lista1;
        n++;
    };
    n = 1;
    printf("\nSegunda lista\n");
    while (n <= 15)
    {
        printf("Dime la segunda lista de 15 elementos ");
        scanf("%i", &lista2);
        lista2 = lista2 + lista2;
        n++;
    };

    if (lista1 > lista2)
    {
        printf("La lista 1 es mayor que la lista 2");

    }else if (lista1 < lista2){
        printf("La lista 2 es mayor que la lista 1");
    
    }else{
        printf("Las listas son iguales");
    };

    getch();
    return 0;
}