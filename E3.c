// Crear un programa que solicite 5 calificaciones al usuario. 
// Calcular el promedio y determinar si aprobó o reprobó el curso. 
// Si ingresa una calificación menor a cero y mayor a diez, 
// mandar un mensaje de error y solicitar nuevamente la calificación
#include <stdio.h>

float Cal;
float suma = 0.0;
float promedio;

int main(){
    int i = 0;
    while(i < 5){
        printf("Ingrese la calificacion %d: ", i+1);
        scanf("%f", &Cal);
        if(Cal < 0 || Cal > 10 || Cal == -0){
            printf("Calificacion incorrecta... Intente nuevamente \n");
        }
        else{
            suma += Cal; // suma = suma + cal
            i++; // i = i + 1
        }
    }
    promedio = suma/5;
    if(promedio >= 6){
        printf("Tu promedio es de: %0.2f ... Felicidades aprobaste", promedio);
    }
    else{
        printf("Tu promedio es de: %0.2f ... Echale ganitas :)", promedio);
    }
    return 0;
}