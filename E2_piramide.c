#include <stdio.h>

void Piramide(int N){
    // N es el numero de pisos
    
    int i, j;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N-i; j++)
        {   
            printf(" ");
        }
        for (int j = 1; j <= i*2-1; j++)
        {
             printf("*");
        }
        printf("\n");
    }
}

int main(){
    int N;
    printf("Ingrese la altura de la piramide: ");
    scanf("%d", &N);
    Piramide(N);
    return 0;
}