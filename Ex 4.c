#include <stdio.h>
int main () 
{
      /* Amador Salinas Manuel Uriel
    12 May 21
    Ex4.c
    */

   float peso, altura, IMC;
   printf ("\n\n Programa 7");
   printf ("\n\n calcular el indice de masa corporal");
   printf ("\n\n Dame el peso");
   scanf ("%f",&peso);
   printf ("\n\n Dame la altura");
   scanf ("%f",&altura);
   IMC=peso/(altura*altura);
   printf ("\n\n La masa muscular es %f",IMC);
   
   return 0;
}