//
// Created by carca on 03/03/2022.
//

#include <stdio.h>

#define MAX 5
#define LIMITE 100


void sumaPosiciones(int arreglo[MAX]);
void sumaPares(int arreglo[MAX]);
void sumaTotal(int arreglo[MAX]);

int main() {
    int arreglo[MAX];
    int i;


    for (i = 0; i < MAX; i++) {
        printf("Dame numeros del 1 al %d:\n", LIMITE);
        scanf("%d", &arreglo[i]);
    }

    sumaPosiciones(arreglo);
    sumaPares(arreglo);
    sumaTotal(arreglo);

}


void sumaPosiciones( int arreglo[MAX]){
    int total, i;
    for (i = 0; i < MAX; i += 2) {
        total = total + arreglo[i];
    }

    printf("suma de las posiciones pares es:  %d\n", total);
}

void sumaPares(int arreglo[MAX]){
    int i;
    int suma=0;
    for (i = 0; i < MAX; i++) {
        if (arreglo[i] % 2 == 0)
            suma = suma + arreglo[i];
        else
            suma = suma + 0;
    }

    printf("La suma de los valores pares es: %d\n", suma);
}

void sumaTotal(int arreglo[MAX]){
    int i;
    int sumaTodo= 0;
    int elementosSumados;
    for (i = 0; i < MAX; i++) {
        if (sumaTodo + arreglo[i] <= LIMITE){
            sumaTodo = sumaTodo + arreglo[i];
            elementosSumados = i +1;
        }
    }
    printf("La suma total de los valores es: %d\n", sumaTodo);
    printf("los elementos sumados fueron: %d", elementosSumados);
}
