#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");
	
int A;

printf ("\nEntre com um número:");
printf ("\n");
scanf ("%d",&A);
if (A==1)
printf ("\nEquivale á Janeiro");
if (A==2)
printf ("\nEquivale á Fevereiro");
if (A==3)
printf ("\nEquivale á Março");
if (A==4)
printf ("\nEquivale á Abril");
if (A==5)
printf ("\nEquivale á Maio");
if (A==6) 
printf ("\nEquivale á Junho");
if (A==7)
printf ("\nEquivale á Julho");
if (A==8)
printf ("\nEquivale á Agostoo");
if (A==9)
printf ("\nEquivale á Setembro");
if (A==10)
printf ("\nEquivale á Outubro");
if (A==11)
printf ("\nEquivale á Novembro");
if (A==12) 
printf ("\nEquivale á Dezembro");
printf ("\n");
system ("PAUSE");
}
