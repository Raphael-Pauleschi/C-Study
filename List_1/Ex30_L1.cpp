#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A,B,C;
float F;

printf ("\n""Entre com os 3 lados do tri�ngulo: ");
printf ("\n");
scanf ("%d",&A);
scanf ("%d",&B);
scanf ("%d",&C);
F=(A+B+C)/2;
printf ("\n""A �rea desse tri�ngulo � de: ");
printf ("\n");
printf ("%f",F);
printf ("\n");
system ("PAUSE");
}
