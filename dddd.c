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