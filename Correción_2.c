
//
// Created by carca on 06/03/2022.
//


#include <stdio.h>
#define MAX 100

void cambiaMayusculasMinusculas(char *cadena, char *cadena2);

int main(){

    char cadena[MAX];
    char cadena2[MAX];

    printf("Cual es tu cadena de caracteres: ");
    scanf("%[^\n]", &cadena);


    cambiaMayusculasMinusculas(cadena, cadena2);
    printf("%s", cadena2);

}

void cambiaMayusculasMinusculas(char *cadena, char *cadena2){

    for(int i=1; i <= MAX ; i++){

        if(cadena[i] == 'a')
            cadena[i] = 'A';
        cadena2[i] = cadena[i];

        if(cadena[i] == 'e')
            cadena[i] = 'E';
        cadena2[i] = cadena[i];

        if(cadena[i] == 'i')
            cadena[i] = 'I';
        cadena2[i] = cadena[i];

        if(cadena[i] == 'o')
            cadena[i] = 'O';
        cadena2[i] = cadena[i];

        if(cadena[i] == 'u')
            cadena[i] = 'U';
        cadena2[i] = cadena[i];

        if(cadena[i] == 'A')
            cadena[i] = 'a';


        if(cadena[i] == 'E')
            cadena[i] = 'e';


        if(cadena[i] == 'I')
            cadena[i] = 'i';


        if(cadena[i] == 'O')
            cadena[i] = 'o';


        if(cadena[i] == 'U')
            cadena[i] = 'u';

    }
}