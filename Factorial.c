// Calcula el factorial de un numero

#include <stdio.h>

long int factorial(int n){
    if(n == 1){
        return n;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int n;

    printf("Ingrese el numero: ");
    scanf("%d", &n);

    printf("El factorial de %d es: %d", n, factorial(n));

    return 0;
}