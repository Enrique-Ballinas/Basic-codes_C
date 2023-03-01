#include <stdio.h>

float radio;
float area;
float pi = 3.1416;

int main(){
  printf("Ingrese el valor del radio: ");
  scanf("%f", &radio);

  area = pi*(radio*radio);

  printf("El area del circulo es: %f", area);

  return 0;
}
