// Programa que pide una clave de acceso al usuario
// cuando la clave sea la correcta el usuario podra entrar
#include <stdio.h>

int clave;

int main(){
    do
    {
        printf("Ingrese la clave por favor: ");
        scanf("%d", &clave);

        if(clave != 711){
            printf("Clave incorrecta... Intenten nuevamente \n");
        }
    } while (clave != 711);
    printf("Clave correcta... Bienvenido");
    
    return 0;
}