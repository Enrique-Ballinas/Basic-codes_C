// Diseñar un programa en C que tenga el siguiente menú: Si el usuario introduce la palabra suma, 
// el programa tiene que solicitar dos numeros y mostrar el resultado en pantalla. 
// Repetir el proceso para la palabra resta y multiplicar.  Si se ingresa otra palabra mandar un mensaje de error.

#include <stdio.h>
#include <string.h> // libreria para usar strcmp

int main(){
    char operacion[10];
    float num;
    float num2;
    float resultado;

    printf("Bienvenido, Ingrese la palaba SUMA para realizar una suma, MULTI para multiplicar, o RESTA para restar: ");
    scanf("%s", operacion);

    if(strcmp(operacion, "SUMA") == 0){ // strcmp retorna cero cuando las palabras son identicas
        printf("Ingrese el primer numero a sumar: ");
        scanf("%f", &num);
        printf("Ingrese el segundo numero a sumar: ");
        scanf("%f", &num2);
        resultado = num + num2;
        printf("El resultado de la suma es: %f", resultado);

    }
    else if(strcmp(operacion, "MULTI") == 0){
        printf("Ingrese el primer numero a multiplicar: ");
        scanf("%f", &num);
        printf("Ingrese el segundo numero a multiplicar: ");
        scanf("%f", &num2);
        resultado = num * num2;
        printf("El resultado de la multiplicacion es: %f", resultado);
    }

    else if(strcmp(operacion, "RESTA") == 0){
        printf("Ingrese el primer numero a restar: ");
        scanf("%f", &num);
        printf("Ingrese el segundo numero a restar: ");
        scanf("%f", &num2);
        resultado = num - num2;
        printf("El resultado de la resta es: %f", resultado);
    }
    else{
        printf("ERROR, esa operacion no existe");
    }
    return 0;
}