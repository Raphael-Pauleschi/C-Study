#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A;

printf ("\n Entre com um n�mero:");
printf ("\n");
scanf ("%d",&A);
if (A>=0)
printf ("Esse n�mero � Positivo");
else
printf ("Esse n�mero � Negativo");
printf ("\n");
system ("PAUSE");
}
