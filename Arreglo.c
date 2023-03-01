#include <stdio.h>

int numeros[5] = {10, 15, 12, 9, 2};
int suma=0;

int main(){
    /*
    numeros[0] = 10;
    numeros[1] = 15;
    numeros[2] = 12;
    numeros[3] = 9;
    numeros[4] = 2;
*/
    //suma = numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4];
    int size = sizeof(numeros) / sizeof(int); // Calcular la longitud de un arreglo

    for (int i = 0; i < size; i++)
    {
        suma=numeros[i] + suma;
    }
    
    printf("%d", suma);

    return 0;
}