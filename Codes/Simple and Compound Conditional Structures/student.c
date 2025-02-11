#include <stdio.h>
#include <conio.h>

int main(){
    float n1, n2, n3, sum, promedio;
    printf("Ingresa tus 3 notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    sum = n1 + n2 + n3;
    promedio = sum / 3;
    if (promedio >= 3.4){
        printf("Pasaste, te quedó en %.3f\n", promedio);
    }else{
        printf("Reprobaste, te quedó en %.3f\n", promedio);
    };
    getch();
    return 0;
}