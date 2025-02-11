#include <stdio.h>

int main(){
    int HorasTrabajadas; // int es un tipo de dato que se usa para almacenar números enteros
    int CostoXhora;
    float Salario; // float es un tipo de dato que se usa para almacenar números decimales

    printf("Ingrese las horas trabajadas: ");
    scanf("%i", &HorasTrabajadas); // scanf es una función que se usa para leer datos del usuario
    //%d puede leer enteros base10, %i puede leer enteros base10, octales y hexadecimales
    //%f puede leer números decimales o float(flotantes)
    //%c puede leer un solo caracter
    //%s puede leer una cadena de caracteres
    printf("Ingrese el costo por horas: ");
    scanf("%i", &CostoXhora);

    Salario = HorasTrabajadas * CostoXhora;
    printf("El salario total es: %.2f\n", Salario); //Hay que ponerle un límite jejeje, o sea, 2 decimales; para que no se vea tan feo
    //printf("%f", Salario);
    printf("Programa terminado. Presione Enter para salir...\n");
    getchar(); // getchar es una función que se usa para esperar a que el usuario presione una tecla
    getchar(); //En este caso se pone dos veces para que el programa no se cierre inmediatamente

    return 0;
}