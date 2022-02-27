#include<stdio.h>
#include<stdlib.h>

int main(void){

float R,F;

printf ("Entre com temperatura em Fahrenheit: ");
scanf ("%f",&R);
F=(5*(R-32))/9;
printf ("\n""Em Celsius ficaria: ""%f",F);
printf ("\n");
system ("PAUSE");	
}
