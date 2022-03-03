//
// Created by carca on 27/02/2022.
//

#include <stdio.h>

void pidePunto(int *x, int *y );
void calculaPuntoMedio(int x1, int y1, int x2, int y2, int *xm, int *ym);

int main()
{
    int x1, y1, x2, y2;
    int xmedio, ymedio;

    pidePunto(&x1, &y1);
    pidePunto(&x2, &y2);

    calculaPuntoMedio(x1, y1, x2, y2, &xmedio, &ymedio);
    printf("El punto medio es:(%d, %d)", xmedio, ymedio);

    return 0;

}

void calculaPuntoMedio(int x1, int y1, int x2, int y2, int *xm, int *ym)
{
    *xm = (x1 + x2) / 2;
    *ym = (y1 + y2) / 2;
}

void pidePunto(int *x, int *y)
{
    printf("x: ");
    scanf("%d", x);
    printf("y: ");
    scanf("%d", y);
}






















#include <stdio.h>
#define N 10
void calculaMayorMenor (float *M, float *m) ;

int main()
{
    float mayor, menor;
    calculaMayorMenor(&mayor, &menor);
    printf("El numero mayor es: %.2f\n", mayor) ;
    printf("El numero menor es: %.2f", menor);
}


void calculaMayorMenor (float *M, float *m)
{
    float num;
    int contador;
    contador = 0;
    printf("Ingresa un numero: ") ;
    scanf("%f", &num);
    *M = num;
    *m = num;

    while (contador < (N-1))
    {
        printf("Ingresa otro numero: ");
        scanf("%f", &num) ;
        if ( *M < num)
        {
            *M = num:
        }
        else if (*m > num)
        {
            *m = num,
        }
        contador++;
    }
}











int comparaNumeroPerfecto (int num) ;
int main
        {
                int numero, perfecto;
                printf("Ingresa un numero: ");
                scanf("%d", &numero);
                perfecto = comparaNumeroPerfecto(numero);
                printf("El numero %d", numero);
                if (perfecto == 1)
                {
                    printf(" es perfecto") ;
                } else
                {
                    printf(" no es perfecto") ;
                }
                return 0;
        }

int comparaNumeroPerfecto (int num)
{
    int suma = 0;
    int perfecto = 0;
    if (num > 0)
    {
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                suma = suma + i;
            }
            if (suma == num)
            {
                perfecto = 1:
            }
        }
        return perfecto;
    }





















