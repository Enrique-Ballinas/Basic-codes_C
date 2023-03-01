// Usando ciclo do-while. Crear un programa que solicite números enteros negativos y calcule la suma de todos ellos. 
// El programa terminara cuando se ingrese un valor de cero o entero positivo. 
// El programa no debe sumar el número positivo ingresado 

#include <stdio.h>

int N;
int suma = 0;

int main(){
    do
    {
        printf("Ingresa un entero negativo... Cero o entero postivo para finalizar: ");
        scanf("%d", &N);

        if(N < 0){
            suma+=N;
        }
    } while (N < 0);
    
    printf("La suma de los numeros ingresados es: %d", suma);

    return 0;
}
