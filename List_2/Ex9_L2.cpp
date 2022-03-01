#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(void){

setlocale(LC_ALL,"Portuguese");
	
int A,B,C,D;

printf ("Entre com o valor do Tempo: ");
printf ("\n");
scanf ("%d",&A);
printf ("Entre com o valor da Velocidade: ");
printf ("\n");
scanf ("%d",&D);
B=A*D;
printf ("Distancia=""%d",A);
printf ("*""%d",D);
printf ("\n""Distancia=""%d",B);
C=B/12;
printf ("\n");
printf ("\n""Litros gastos=""%d",B);
printf ("/15");
printf ("\n");
printf ("\n""Nessa viagem, foram gastos ""%d",C);
printf (" litros");
printf ("\n");
system ("PAUSE");
}
