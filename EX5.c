#include <stdio.h>
int main()
{
     /* Amador Salinas Manuel Uriel
     12 MAY 21
    Programa 1.
    */
    float numeropersonas, numeroalimentos, porciones;
    printf ("\n\n Programa 1");
    printf ("\n\n Calcula las porciones que le toca a cada persona");
    printf ("\n\n Dame el numero de personas");
    scanf ("%f",&numeropersonas);
    printf ( "\n\n Dame el numero de alimentos");
    scanf ( "%f",&numeroalimentos);
    porciones= (numeropersonas / numeroalimentos);
    printf ("\n\n la porcion para dividir equitativamente a cada persona es el %f", porciones);
    return 0;
}