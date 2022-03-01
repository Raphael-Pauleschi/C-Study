#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(void){

setlocale(LC_ALL,"Portuguese");

char Z[2];

printf ("\nEntre com o seu Sexo:");
printf ("\n"); 
scanf ("%c",&Z);
if (strcmp(Z,"M")==0)
printf ("É Homem!");
else
if (strcmp(Z,"F")==0)
printf (É Mulher!");
else
printf ("Valor Invalido!");
printf ("\n");
system ("PAUSE");
}
