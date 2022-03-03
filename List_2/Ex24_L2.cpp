#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A,B,C,D,E,F,G,H;

printf ("\n Entre com 5 valores: ");
printf ("\n");
scanf ("%d",&A);
scanf ("%d",&B);
scanf ("%d",&C);
scanf ("%d",&D);
scanf ("%d",&F);
F=A;
if (B>F)
F=B;
if (C>F)
F=C;
if (D>F)
F=D;
if (E>F)
F=E;


if (A<F)
G=A;
if (B<F)
G=B;
if (C<F)
G=C;
if (D<F)
G=D;
if (E<F)
G=E;

if (A>G && A<F)
G=A;
if (B>G && B<F)
G=B;
if (C>G && C<F)
G=C;
if (D>G && D<F)
G=D;
if (E>G && E<F)
G=E;

H=F-G;

printf ("%d - %d = %d",F,G,H);
printf ("\n");
system ("PAUSE");
}
