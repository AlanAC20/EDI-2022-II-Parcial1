//
// Created by carca on 03/03/2022.
//

#include <stdio.h>
#define FILAS 100
#define COLS 100

void muestra(int A[FILAS][COLS], int N, int M)
void sumaArreglos(int matriz[FILAS][COLS], int N, int M);


int main()
{
    int i;
    int j;
    int N;
    int M;
    int matriz[FILAS][COLS];

    printf("cuantas filas? ");
    scanf("%d", &N);
    printf("cuantas columnas? ");
    scanf("%d", &M);

    for(i=0; i<N; i++){
        for (j=0; j<M; j++) {
            printf("Ingrese el valor de la celda %d, %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    muestra(matriz, N, M);

    return 0;
}

void muestra(int matriz[FILAS][COLS], int N, int M){
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d", matriz[i][j]);
            printf("   ");

        }
        printf("\n");
    }

}

void sumaArreglos(int matriz[FILAS][COLS], int N, int M){
    int suma =0;
    int i,j;

    for(i = 0; i<N; i++){
        for(j = 0; j<M; j++){
            suma = suma + matriz[FILAS][COLS];
        }
    }
}


















