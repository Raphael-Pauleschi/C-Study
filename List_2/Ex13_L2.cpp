#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");
	
int A;

printf ("\nEntre com um n�mero:");
printf ("\n");
scanf ("%d",&A);
if (A==1)
printf ("\nEquivale � Janeiro");
if (A==2)
printf ("\nEquivale � Fevereiro");
if (A==3)
printf ("\nEquivale � Mar�o");
if (A==4)
printf ("\nEquivale � Abril");
if (A==5)
printf ("\nEquivale � Maio");
if (A==6) 
printf ("\nEquivale � Junho");
if (A==7)
printf ("\nEquivale � Julho");
if (A==8)
printf ("\nEquivale � Agostoo");
if (A==9)
printf ("\nEquivale � Setembro");
if (A==10)
printf ("\nEquivale � Outubro");
if (A==11)
printf ("\nEquivale � Novembro");
if (A==12) 
printf ("\nEquivale � Dezembro");
printf ("\n");
system ("PAUSE");
}
