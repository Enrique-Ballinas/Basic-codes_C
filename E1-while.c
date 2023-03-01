//Usando un ciclo while. Crear un programa que solicite al usuario su contraseña (numérica). 
// Debe terminar cuando introduzca el número 4567, pero volver a pedir cuantas veces sea necesario.
#include <stdio.h>

int clave = 0;

int main(){
    while(clave != 4567){
        printf("Ingrese la clave: ");
        scanf("%d", &clave);

        if(clave != 4567){
            printf("Clave incorrecta...Intente nuevamente \n");
        }
    }
    printf("Clave correcta... Bienvenido");
}