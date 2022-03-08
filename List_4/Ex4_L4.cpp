#include <stdio.h>

int main (void){
int A[10],C,D;
double B[10];
   
for (C=1;C<=10;C=C+1){
printf ("\nEntre com o valor %d",C);
printf ("\n");
scanf ("%d",&A[C]);
D=A[C];
for (B[C]=1;D>1;D=D-1) 
B[C]=B[C]*D;
}
for (C=1;C<=10;C=C+1)
printf ("\nO fatorial de %d: %.0f",A[C],B[C]);
}
