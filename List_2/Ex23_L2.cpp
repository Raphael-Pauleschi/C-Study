#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A;

printf ("\n Entre com um número:");
printf ("\n");
scanf ("%d",&A);
if (A>=0)
printf ("Esse número é Positivo");
else
printf ("Esse número é Negativo");
printf ("\n");
system ("PAUSE");
}
