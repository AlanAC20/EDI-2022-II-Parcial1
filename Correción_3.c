//
// Created by carca on 07/03/2022.
//

#include <stdio.h>

#define N 3
#define M 4

void muestra(int matriz[N][M]);
void sumaVecinos(int matriz[N][M]);
void imp_mat(int matriz[N][M]);

int main(){

    int i, j;
    int matriz[N][M];
    int suma[N][M];
    int muestraMatriz[N][M];

    for(i = 0; i < N; i++){
        for (j = 0; j < M; j++) {
            printf("Ingrese el valor de la celda %d, %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    muestra(matriz);
    sumaVecinos(matriz, suma);
    muestraMatriz(matriz)

}

void muestra(int matriz[N][M]){

    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
          printf("%d", matriz[i][j]);
            printf("   ");

    }
         printf("\n");
    }
}


void sumaVecinos(int matriz[N][M], int suma[N][M]){
    int i, j;
    for( i = 0; i < N; i++){
        for( j= 0; j < N; j++){
            if(i == 0 && j == 0){
                suma[i][j] = matriz[i][j] + matriz[i+1][j] + matriz[i][j+1];
            }else if(i == 0 && j == 1){
                suma[i][j] = matriz[i][j] + matriz[i][j-1] + matriz[i][j+1] + matriz[i+1][j+1];

            }else if( i == 0 && j == 2){
                suma[i][j] = matriz[i][j] + matriz[i][j-1] + matriz[i][j+1] + matriz[i+1][j-1];

            }else if( i == 0 && j == 3){
                suma[i][j] = matriz[i][j] + matriz[i][j-1] + matriz[i+1][j];

            }else if(i == 1 && j == 0){
                suma[i][j] = matriz[i][j] + matriz[i-1][j] + matriz[i][j+1];

            }else if( i == 1 && j == 1){
                suma[i][j] = matriz[i][j] + matriz[i-1][j] + matriz[i][j-1] + matriz[i][j+1] + matriz[i+1][j];

            }else if ( i == 1 && j ==2 ){}
                suma[i][j] = matriz[i][j] + matriz[i-1][j] + matriz[i][j-1] + matriz[i][j+1] + matriz[i+1][j];

            }else if ( i == 1 && j == 3){
                suma[i][j] = matriz[i][j] + matriz[i-1][j] + matriz[i][j-1] + matriz[i+1][j];

            }else if ( i == 2 && j == 0){
                suma[i][j] = matriz[i][j] + matriz[i-1][j] + matriz[i][j+1];

            }else if ( i== 2 && j == 1){
                suma[i][j] =  matriz[i][j] + matriz[i-1][j] + matriz[i][j-1] + matriz[i][j+1];

            }else if( i == 2 && j == 2){
                suma[i][j] = matriz[i][j] + matriz[i-1][j] + matriz[i][j-1] + matriz[i][j+1];

            }else if (i == 2 && j == 3){
                suma[i][j] = matriz[i][j] + matriz[i][j-1] + matriz[i-1][j];
        }
    }

}

void muestraMatriz(int matriz[N][M]){
    for(int f = 0 ; f < N ; f++){
        for(int c = 0 ; c < M ; c++){
            printf(" %i \t", matriz[N][M]);
        }
        printf("\n");
    }
}