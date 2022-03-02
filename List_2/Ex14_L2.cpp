#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A;
float L,K;

printf ("\nEntre com sua altura:");
printf ("\n");
scanf ("%f",&K);
printf ("\n");
printf ("\nSeu sexo é:");
printf ("\n1-Homem");
printf ("\n2-Mulher");
printf ("\n");
scanf ("%d",&A);
if (A==1)
L=(72.7*K)-58; 
if (A==2)
L=(62.1*K)-44.7;
if ((A==1)||(A==2))
printf ("\nSeu peso ideal é: %f",L);
else
printf ("\nGenero Invalido!");
printf ("\n");
system ("PAUSE");
}
