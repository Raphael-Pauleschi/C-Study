#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A,B;

printf ("\nEntre com o ano de seu nascimento:");
printf ("\n");
scanf ("%d",&A);
B=2018-A;
if ((B<=120)&&(B>=16))
printf ("\nPode votar");
if ((B<16)&&(B>0))
printf ("\nInfelizmente, NÃO pode votar!");
if (B<0)
printf ("\nIdade Inválida");
printf ("\n");
system ("PAUSE");
}
