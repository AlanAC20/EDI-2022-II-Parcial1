//
// Created by carca on 01/03/2022.
//

#include <stdio.h>
#define MAX 100

void pideCadena(char cadena[MAX]);
void pideCaracter(char *caracter);
void numeroVeces(char cadena[MAX], char caracter, int *contador);


int main()
{
    char cadena[MAX];
    char caracter;
    int contador;

    pideCadena(&cadena[MAX]);
    pideCaracter(&caracter);
    numeroVeces(&cadena[MAX], caracter, &contador);
    printf("El caracter aparece %d", contador);
    printf(" veces");

    return 0;

}


void pideCadena(char cadena[MAX])
{
    printf("Cual es tu cadena de caracteres: ");
    scanf("%[^\n]", cadena);
}


void pideCaracter(char *caracter)
{
    printf("\nQue caracter quieres encontrar: ");
    scanf("%s", caracter);
}



void numeroVeces(char cadena[MAX], char caracter, int *contador)
{
    for(int i=0; i <= MAX -1 ; i++)
        if(cadena[i] == caracter)
            *contador = *contador +1;
}