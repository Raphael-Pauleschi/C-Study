#include <stdio.h>
#include <stdlib.h>

int main (void){

int A,B,C,D,E,F;

E=0;F=0;
printf ("\nEntre com o valor A");
printf ("\n");
scanf ("%d",&A);
printf ("\nEntre com o valor B");
printf ("\n");
scanf ("%d",&B);
if (A>B){
C=B;
D=A;
}
if (B>A){
C=A;
D=B;
}
E=C+1;
while(E<D){
F=F+E;
E=E+1;
}
printf ("\nA soma do intervalo entre %d e %d: %d",A,B,F);
	
}
