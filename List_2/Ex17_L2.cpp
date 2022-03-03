#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

float L,K;
int A;

printf ("Entre com 2 valoers:");
printf ("\n");
scanf ("%f",&L);
scanf ("%f",&K);
printf ("\n");
printf ("\nEscolha uma execução");
printf ("\n1- Adição");
printf ("\n2- Subtração");
printf ("\n3- Divisão");
printf ("\n4- Multiplicação");
printf ("\n");
scanf ("%d",&A);
printf ("\n");
if (A==1)
printf ("\n%f + %f = %f",L,K,L+K);
if (A==2)
printf ("\n%f - %f = %f",L,K,L-K);
if (A==3)
printf ("\n%f / %f = %f",L,K,L/K);
if (A==4)
printf ("\n%f * %f = %f",L,K,L*K);
if ((A<1)||(A>4))
printf ("Comando invalido");
printf ("\n");
system ("PAUSE");
}
