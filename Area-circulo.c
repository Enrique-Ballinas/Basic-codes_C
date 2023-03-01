// Crear un programa que calcule el área de un circulo.
// El usuario debe de ingresar el valor de radio (dato float).

#include <stdio.h>
# include <math.h>

float area;
float radio;
float pi = 3.14159265;

int main(){
  printf("Ingrese el valor del radio: ");
  scanf("%f", &radio);

  //area = pi * (radio*radio);
  area = pi * (pow(radio,2));

  printf("El radio del circulo es: %0.5f\n", area);
  return 0;
}
