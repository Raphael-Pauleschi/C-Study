#include <stdio.h>
#include <stdlib.h>

int main (void){
	
int A[15],B[15],C;

C=1;
while (C<=15){
printf ("\nEntre com o valor %d",C);
printf ("\n");
scanf ("%d",&A[C]);
if (A[C]%2==0)
B[C]=A[C]-5;
else
B[C]=A[C]+5;
system ("cls");
C=C+1;
}
C=1;
while (C<=15){
printf ("\n%d.A-%d        B-%d",C,A[C],B[C]);
C=C+1;
}
}
