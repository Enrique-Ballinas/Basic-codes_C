// Crear un programa que encuentre el máximo común divisor de dos números, usando el algoritmo de 
// euclides

#include <stdio.h>

int MCD(int n, int m){ 

    if(m == 0){
        return n;
    }
    else{
        int res = n % m; // residuo  
        return MCD(m, res); 
    }
}

int main(){
    int n;
    int m;
    
    printf("Ingresa dos valores para el MCD: ");
    scanf("%d %d", &n, &m);

    printf("El MCD de los valores ingresado es: %d", MCD(n,m));

    return 0;
}