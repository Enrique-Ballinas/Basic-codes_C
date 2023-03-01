#include <stdio.h>

float num1;
float num2;
float resultado;

int main(){
  printf("Ingresa el primer numero: ");
  scanf("%f", &num1);
  printf("Ingresa el segundo numero: ");
  scanf("%f", &num2);

  resultado = num1 / num2;

  printf("El resultado es %f \n", resultado);
  printf("El resultado con tres decimales es %0.3f", resultado);
  return 0;
}
