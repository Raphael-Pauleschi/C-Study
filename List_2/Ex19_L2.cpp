#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A;

printf ("\nEntre com o ano de seu nascimento:");
printf ("\n");
scanf ("%d",&A);
A=2018-A;
printf ("\n");
printf ("\nIdade: %d anos",A);
printf ("\n");
if (A<0)
printf ("\nClassificação: Nem nasceu!");
if ((A>=0)&&(A<=10))
printf ("\nClassificação: Criança");
if ((A>=11)&&(A<=19))
printf ("\nClassificação: Jovem");
if ((A>=20)&&(A<=59))
printf ("\nClassificação: Adulto");
if (A>60)
printf ("\nClassificação: Idoso");
printf ("\n");
printf ("\n");
system ("PAUSE");
}


