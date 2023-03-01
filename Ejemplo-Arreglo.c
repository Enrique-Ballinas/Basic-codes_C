// Realice un programa que capture un arreglo de N elementos. 
// El programa debe determinar el Máximo Común Divisor de los elementos del arreglo.

#include <stdio.h>

int main(){
    int N; // numero de elementos en el arreglo
    int num; // elemento dentro del arreglo
    
    printf("Ingrese el numero elementos en el arreglo: ");
    scanf("%d", &N);

    int Arreglo[N]; // inicializo el arreglo

    for (int i = 0; i < N; i++)
    {
        printf("Ingresa el elemento %d: ", i+1);
        scanf("%d", &num);

        Arreglo[i] = num;
    }
    
    for(int i = 0; i < N; i++){
        printf("%d ", Arreglo[i]);
    }
    printf("\n");
    /*
    int size = sizeof(Arreglo) / sizeof(int);
    printf("\n");
    printf("%d", size);
    */
   
   // Calculamos el MCD
    int div = 1; // maximo comun divisor
    int i = 1; // divisor (contador)
    int bandera = 0; // variable centinela
    int new_valor; // nuevo valor al aplicar MCD
    int veces;
    while(bandera == 0) // ciclo para calcular al maximo comun divisor
    {
        int flag = 0; // Variable que indica si el numero es comun divisor 
        for (int j = 0; j < N; j++) // ciclo para ingresar a cada elemento del arreglo
        {
            if(Arreglo[j] % i != 0){ // Si genera residuo No es el maximo comun divisor
                flag = 1;
                bandera = 1;
                break;
            }
            else{
                new_valor = Arreglo[j] / i;
                Arreglo[j] = new_valor;
            }
        }
        if(flag == 0){ // i es comun divisor
            div *= i;
        }
        i++;
        
    }
 
    printf("El MCD es: %d", div);

    return 0;
    
    // Probar con 27, 30, y 24
}