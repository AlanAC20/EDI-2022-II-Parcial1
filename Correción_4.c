//
// Created by carca on 06/03/2022.
//

#include <stdio.h>
#define X -1

void funcionUno(int a, int b, int *resultado1);
void funcionDos(int a, int b, int c, int *resultado2);
void funcionTres(int c, int *resultado3);

int main()
{

    int a, b, c;
    int resultado1, resultado2, resultado3;

    printf("Dame el valor de a:");
    scanf("%d", &a);

    printf("Dame el valor de b:");
    scanf("%d", &b);

    printf("Dame el valor de c:");
    scanf("%d", &c);


    funcionUno(a,b,&resultado1);
    printf("El resultado 1 es: %d\n", resultado1);

    funcionDos(a, b, c, &resultado2);
    printf("El resultado 2 es: %d\n", resultado2);

    funcionTres(b, &resultado3);
    printf("El resultado 3 es: %d\n", resultado3);

}


void funcionUno(int a, int b, int *resultado1){

    if(a > b)
        *resultado1 = (b * 2);
    else
        *resultado1 = 0;
}

void funcionDos(int a, int b, int c, int *resultado2){

    if(a < b)
        *resultado2 = c - a;
    else
        *resultado2 = 0;
}


void funcionTres(int c, int *resultado3){
    if(c < 0)
        *resultado3 = c * X;
    else
        *resultado3 = 0;

}

