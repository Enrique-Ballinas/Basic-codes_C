// Programa que calcula la siguiente operación
// ((a+b)/c)^2

#include <stdio.h>

float a;
float b;
float c;
float R;

int main(){
    printf("Ingresa el valor para a: ");
    scanf("%f", &a);
    printf("Ingresa el valor para b: ");
    scanf("%f", &b);
    printf("Ingresa el valor para c: ");
    scanf("%f", &c);

    R = (a+b)/c;
    R = R*R;

    printf("El resultado de la operacion es: %0.2f", R);

    return 0;
}