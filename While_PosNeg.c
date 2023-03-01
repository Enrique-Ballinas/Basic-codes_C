// El programa muestra si cada numero ingresado es positivo o negativo, y 
// para cuando ingresamos un cero
#include <stdio.h>

int N;

int main(){
    printf("Ingresa un numero: ");
    scanf("%d", &N);

    while(N != 0){
        if(N > 0){
            printf("El numero es positivo... \n");
        }
        else{
            printf("El numero es negativo...\n");
        }

        printf("Ingresa otro numero... Ingrese cero para terminar: ");
        scanf("%d", &N);    
    }

    return 0;
}