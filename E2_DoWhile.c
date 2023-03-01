// Usando ciclo do-while. Crear un programa que solicite números enteros positivos y calcule la suma de todos ellos. 
// El programa terminara cuando se ingrese un valor de cero o entero negativo. 
// El programa no debe sumar el número negativo ingresado 
#include <stdio.h>

int N;
int suma = 0;

int main(){
    do
    {
        printf("Ingresa un entero positivo... Cero o entero negativo para finalizar: ");
        scanf("%d", &N);

        if(N > 0){
            suma+=N;
        }
    } while (N > 0);
    
    printf("La suma de los numeros ingresados es: %d", suma);

    return 0;
}
