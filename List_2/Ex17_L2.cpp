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
printf ("\nEscolha uma execu��o");
printf ("\n1- Adi��o");
printf ("\n2- Subtra��o");
printf ("\n3- Divis�o");
printf ("\n4- Multiplica��o");
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
