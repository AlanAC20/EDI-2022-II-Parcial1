//Escribe un programa que pida al usuario días, horas y minutos.
// Calcule la cantidad total de segundos y los imprima como en el ejemplo:

#include <stdio.h>
#define DIAS 86400
#define HORAS 3600
#define MINUTOS 60

int main ()
{
    int dias;
    int horas;
    int min;
    int total;

    printf("Cuantos dias?");
    scanf("%d,", &dias);

    printf("Cuantas horas?");
    scanf("%d,",&horas);

    printf("Cuantos minutos");
    scanf("%d", &min);


    total = (DIAS * dias) + (HORAS * horas) + (MINUTOS * min);

    printf("El total de segundos es: %d", total);

    return 0;


}