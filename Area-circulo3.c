// Programa que cálcula el área de un circulo
#include <stdio.h>

float area = 0.0;
float radio = 0.0;
#define PI 3.1416

int main(){
    printf("Ingrese el valor del radio: ");
    scanf("%f", &radio);

    area = PI * (radio*radio);

    printf("El area del circulo es: %f", area);

    return 0;
}