// Usando un ciclo while. Crear un programa que solicite al usuario su contraseña (numérica). 
// El usuario solo tendrá 3 oportunidades para ingresar la contraseña (1234). 
// El programa tiene que mencionarle al usuario cuantos intentos le quedan cada vez que ingrese la contraseña incorrecta. 
#include <stdio.h>

int intentos = 3;
int contra;
int i = 0; // contador de intentos

int main(){
    while(i < intentos){
        printf("Ingrese la contraseña: ");
        scanf("%d", &contra);
        if(contra == 1234){
            printf("Password correcto... Bienvenido");
            i = 9999; // Para que salga del bucle, tambien pude haber usado un break
        }
        else{
            i++;
            printf("Password incorrecto, te quedan %d intentos \n", intentos-i);
        }
    }
    return 0;
}