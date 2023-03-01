// CODIGO PENDIENTE
//  Realice un programa que capture un arreglo de N elementos. 
// El programa debe determinar el Máximo Común Divisor (función) de los elementos del arreglo. 

#include <stdio.h>

int MCD(int Arreglo[], int N){ 
    int div = 2; // maximo comun divisor
    int bandera = 0; // variable centinela para salir del for

    for(div; div < 999999; div++){ // ciclo que incrementa el divisor
        int i = 0; // contador
        while(i < N){ // ciclo que accede a cada uno de los elementos del arreglo
            if(Arreglo[i] % div == 0){
                i++;
            }
            else{
                bandera = 1;
                break;
            }
    }
    if(bandera == 1);
        break; // Salimos del for
    }
    return div;
}

int main(){
    int N; // Numero de elementos en el arreglo
    int num; // dato agregado al arreglo
    int Arreglo[N];

    printf("Ingrese el numero de elementos: ");
    scanf("%d", &N);

    for(int i; i < N; i++){ // Ingreso los datos al arreglo
        printf("Ingrese el elemento %d", i+1);
        scanf("%d", &num);
        Arreglo[i] = num;
    }

    // Calculo el MCD
    W = MCD(Arreglo, N);
    printf("%d", );
}