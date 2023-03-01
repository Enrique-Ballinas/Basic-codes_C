// Crear un programa que solicite el primer nombre al usuario y lo imprima
// con la siguiente frase: “Bienvenido (nombre del usuario) al curso de
// programación estructurada”.

#include <stdio.h>

char nombre[15];

int main(){
  printf("Ingresa el nombre del usuario: \n");
  scanf("%s", nombre);

  printf("Bienvenido %s al curso de programacion estructurada \n", nombre);

  return 0;
}
