#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");
	
int A,B,C,D,E,I,G,H,V;

printf ("\nEntre com o valor");
printf ("\n");
scanf ("%d",&A);
B=A+1;
C=A+2;
D=A+3;
E=A-1;
I=A-2;
G=A-3;
H=A-4;
V=A-5;
printf ("\nOs 3 acima:");
printf ("\n%d",D);
printf ("\n%d",C);
printf ("\n%d",B);
printf ("\nOs 5 abaixo:");
printf ("\n%d",E);
printf ("\n%d",I);
printf ("\n%d",G);
printf ("\n%d",H);
printf ("\n%d",V);
printf ("\n");
system ("PAUSE");
}

