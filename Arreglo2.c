#include <stdio.h>

char texto[20];

int main(){
    printf("Ingresa tu nombre ");
    scanf("%s", &texto);

    printf("Tu nombre es: %s \n", texto);
    printf("La primer letra de tu nombre es: %c", texto[0]);

    return 0;
}