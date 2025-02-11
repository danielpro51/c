#include <stdio.h>
#include <conio.h>

int main(){
    int Tpreguntas, Pcorrectas, pond;
    printf("Cuántas preguntas se realizaron: ");
    scanf("%i", &Tpreguntas);
    printf("Preguntas correctas: ");
    scanf("%i", &Pcorrectas);

    pond = (Pcorrectas*100/Tpreguntas); //Se multiplica x100, porque si n < 1 en enteros se redondea a 0

    if(pond >= 90){
        printf("Nivel máximo0");
    }else if(pond >=75){
        printf("Nivel medio");
    }else if(pond >= 50){
        printf("Nivel regular");
    }else{
        printf("Fuera de nivel");
    }

    getch();
    return 0;
}