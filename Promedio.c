// Programa para calcular el promedio de 3 calificaciones

#include <stdio.h>

float C1, C2, C3;
float P;

int main(){
    printf("Ingresa las primer calificacion: ");
    scanf("%f", &C1);
    printf("Ingresa la segunda calificacion: ");
    scanf("%f", &C2);
    printf("Ingresa la tercer calificacion: ");
    scanf("%f", &C3);

    P = (C1 + C2 + C3) / 3;

    printf("El promedio general es: %0.2f", P);

    return 0;
}
