#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");
	
int A;

printf ("\nEntre com sua idade:");
printf ("\n");
scanf ("%d",&A);
if (A<5)
printf ("\nClassifica��o: Nenhuma");
if ((A>=5)&&(A<=7))
printf ("\nClassifica��o: Infantil A");
if ((A>=8)&&(A<=10))
printf ("\nClassifica��o: Infantil B");
if ((A>=11)&&(A<=17))
printf ("\nClassifica��o: Infantil C");
if (A>18)
printf ("\nClassifica��o: Adulto");
printf ("\n");
system ("PAUSE");
}
