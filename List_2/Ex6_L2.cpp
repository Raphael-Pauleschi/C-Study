#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A;

printf ("\nEntre com o valor:");
printf ("\n");
scanf ("%d",&A);
if ((A>10)&&(A<50))
printf ("\nEsse número está dentro da faixa!");
else
printf ("\nEsse número está fora da faixa!");
printf ("\n");
system ("PAUSE");
}

