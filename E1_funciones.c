// Diseñar un programa en C que tenga el siguiente menú: Si el usuario introduce la palabra suma, 
// se tiene que invocar una función que sume el numero que el usuario introduzca, 
// el usuario también tiene que introducir el numero de veces que quiere que se sume ese dato. 
// Repetir el proceso para la palabra multiplicar.  Si se ingresa otra palabra mandar un mensaje de error.

#include <stdio.h>
#include <string.h> // libreria para usar strcmp

float Sumar(float num, int N){
    // num es el numero a sumar
    // N es el numero de veces que se tiene que realizar la operacion
    float sumas = 0;

    for(int i = 0; i < N; i++){
        sumas += num;
    }

    return sumas;
}

float Multiplicar(float num, int N){
    // num es el numero a MULTPLICAR
    // N es el numero de veces que se tiene que realizar la operacion
    float multi = 1;

    for(int i = 0; i < N; i++){
        multi *= num;
    }

    return multi;
}

int main(){
    char operacion[10];
    float num;
    int veces;

    printf("Bienvenido, Ingrese la palaba SUMA para realizar una suma o MULTI para multiplicar: ");
    scanf("%s", operacion);

    if(strcmp(operacion, "SUMA") == 0){ // strcmp retorna cero cuando las palabras son identicas
        printf("Ingrese el numero a sumar: ");
        scanf("%f", &num);
        printf("Ingrese la cantidad de veces que sumara el numero: ");
        scanf("%d", &veces);
        printf("El resultado de la suma es: %f", Sumar(num, veces));

    }
    else if(strcmp(operacion, "MULTI") == 0){
        printf("Ingrese el numero a multiplicar: ");
        scanf("%f", &num);
        printf("Ingrese la cantidad de veces que multiplicara el numero: ");
        scanf("%d", &veces);
        printf("El resultado de la multiplicacion es: %f", Multiplicar(num, veces));
    }
    else{
        printf("ERROR, esa operacion no existe");
    }
    return 0;
}