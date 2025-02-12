#include <stdio.h>
#include <conio.h>

int main(){
    int i=1, j, mulT=0, mulC=0;

    for(i; i <= 10; i++){
        printf("Dime un número: ");
        scanf("%i", &j);

        if(j % 3 == 0){
            mulT++;
        }else if(j % 5 == 0){
            mulC++;
        }
    }
    printf("Multiplos de 3: %i\n", mulT);
    printf("Multiplos de 5: %i\n", mulC);
    getch();
    return 0;
}