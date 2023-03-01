// Crear un programa que calcule el promedio de las calificaciones ingresadas por el usuario. 
// El usuario le indicara al programa cuantas calificaciones ingresara. 
// Si ingresa una calificación menor a cero y mayor a diez, mandar un mensaje de error y solicitar nuevamente la calificación. 
// Al final, imprimir el promedio y situación del estudiante.
#include <stdio.h>

float Cal;
float suma = 0.0;
float promedio;
int i = 0; // contador
int N_cal; // Numero de calificaciones ingresadas por el usuario

int main(){
    printf("Cuantas calificaciones va a promediar: ");
    scanf("%d", &N_cal);
    while(i < N_cal){
        printf("Ingrese la calificacion %d: ", i+1);
        scanf("%f", &Cal);
        if(Cal < 0 || Cal > 10){
            printf("Calificacion incorrecta... Intente nuevamente \n");
        }
        else{
            suma += Cal; // suma = suma + cal
            i++; // i = i + 1
        }
    }
    promedio = suma/N_cal;
    if(promedio >= 6){
        printf("Tu promedio es de: %0.2f ... Felicidades aprobaste", promedio);
    }
    else{
        printf("Tu promedio es de: %0.2f ... Echale ganitas :)", promedio);
    }
    return 0;
}