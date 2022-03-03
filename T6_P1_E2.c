//
// Created by carca on 27/02/2022.
//

#include <stdio.h>

void calcularPerfecto(int numero, int *suma, int *perfecto);

int main()
{
    int numero;
    int suma;
    int perfecto;


    calcularPerfecto(numero, &suma, &perfecto);

    return 0;
}


void calcularPerfecto(int numero, int *suma, int *perfecto)
{
    do
    {
        printf(" Cual numero quieres experimentar: ");
        scanf("%d", &numero);


        for (int i = 1; i < numero; i++)

            if (numero % i == 0)
                suma = suma + i;

        if (suma == numero)
            perfecto = 1;

        printf("El numero %d", numero);

        if (perfecto == 1)
            printf(" es perfecto\n") ;

        else
            printf(" no es perfecto\n") ;


    } while (numero != 0);

}