// Se quiere crear un programa que resuelva la ecuación cuadrática tipo ax2 + bx + c. 

#include <stdio.h>
#include <math.h>

float a;
float b;
float c;
float D;
float den; // denominador de la formula

int main(){
    float x1; // resultados
    float x2;
    
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    printf("Ingrese el valor de c: ");
    scanf("%f", &c);
    
    // Calculamos el discriminante y denominador
    D = pow(b,2) - (4*a*c);
    den = 2*a;
    
    if(D > 0){
        x1 = (-b + sqrt(D)) / den;
        x2 = (-b - sqrt(D)) / den;
        printf("La raiz de x1 es: %f \n", x1);
        printf("La raiz de x2 es: %f", x2);
    }
    else if(D == 0){
        x1 = -b/den;
        printf("La raiz de x1 y x2 es: %f", x1);
    }
    else{
        // En este caso las raices son imaginarias
        printf("%f + i%f \n", (-b/den), (sqrt(-D)/den));
        printf("%f - i%f", (-b/den), (sqrt(-D)/den));
    }
}