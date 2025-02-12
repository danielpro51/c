#include <stdio.h>
#include <conio.h>

int areaTriangulo(int base, int altura){
    return (base*altura)/2;
}

int main(){
    int i=1, n, base, altra,count=0;
    float area;
    printf("Dime un número: ");
    scanf("%i", &n);

    for(i; i <= n; i++){
        printf("Dime la base del triángulo %i: ", i);
        scanf("%i", &base);
        printf("Dime la altura del triángulo %i: ", i);
        scanf("%i", &altra);

        area = areaTriangulo(base, altra);

        if(area > 12){
            count++;
        }
    }
    printf("La cantidad de triángulos con área mayor a 12 es: %i\n", count);
    getch();
    return 0;

}