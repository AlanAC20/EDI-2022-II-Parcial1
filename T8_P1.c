//
// Created by carca on 03/03/2022.
//

#include <stdio.h>
#define FILAS 100
#define COLS 100

void muestra(int matrizA[FILAS][COLS], int N, int M);
void muestra2(int matrizB[FILAS][COLS], int N, int M);
void sumaMatrices(int matrizA[FILAS][COLS], int matrizB[FILAS][COLS], int matrizC[FILAS][COLS], int N, int M);
void promedioColumnas( int matrizC[FILAS][COLS], int N, int M, int prom);


int main()
{
    int i;
    int j;
    int N;
    int M;
    int prom;
    int matrizA[FILAS][COLS];
    int matrizB[FILAS][COLS];
    int matrizC[FILAS][COLS];

    printf("cuantas filas? ");
    scanf("%d", &N);
    printf("cuantas columnas? ");
    scanf("%d", &M);

    for(i=0; i<N; i++){
        for (j=0; j<M; j++) {
            printf("Ingrese el valor de la celda %d, %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }


    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            printf("Ingrese el valor de la matriz 2, celda %d, %d: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    muestra(matrizA, N, M);
    printf("---------------------------\n");
    muestra2(matrizB, N, M);
    printf("---------------------------\n");
    sumaMatrices(matrizA, matrizB,  matrizC, N,  M);
    promedioColumnas(matrizC, N, M, prom);

    return 0;
}

void muestra(int matrizA[FILAS][COLS], int N, int M){
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d", matrizA[i][j]);
            printf("     ");

        }
        printf("\n");
    }
}


void muestra2(int matrizB[FILAS][COLS], int N, int M){
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d", matrizB[i][j]);
            printf("     ");

        }
        printf("\n");
    }

}


void sumaMatrices(int matrizA[FILAS][COLS], int matrizB[FILAS][COLS], int matrizC[FILAS][COLS], int N, int M)
{
    int i, j;
    for (i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    for (i = 0; i < N; i++){
        printf("\n");
        for(j = 0; j < M; j++){
            printf("%d ", matrizC[i][j] );
            printf("   ");

        }
    }
}

void promedioColumnas( int matrizC[FILAS][COLS], int N, int M, int prom)
{
    int i, j;
    int suma;
    for (i = 0; i < N; i++){
        suma = 0;
        for(j = 0; j < N; j++){

            prom = suma + matrizC[i][j];
        }
        prom = suma /  j;
    }
    printf("El promedio es: %d", prom);


}
