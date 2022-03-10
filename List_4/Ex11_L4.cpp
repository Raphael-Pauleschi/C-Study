#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (void){
	
int A[10],B[10],C;

C=1;
while (C<=10){
printf ("\nEntre com o valor impar %d",C);
printf ("\n");
scanf ("%d",&A[C]);
while (A[C]%2==0){
printf ("\nPor favor, entre com um valor IMPAR!");
printf ("\n");	
scanf ("%d",&A[C]);
}
system ("cls");
printf ("\nEntre com o valor par %d",C);	
printf ("\n");
scanf ("%d",&B[C]);
while (B[C]%2!=0){
printf ("\nPor favor, entre com um valor PAR!");	
printf ("\n");
scanf ("%d",&B[C]);
}
system ("cls");
C=C+1;
}
C=1;
while (C<=10){
printf ("\nA%d- %d",C,A[C]);
printf ("\nB%d- %d",C,B[C]);
C=C+1;
}
	
	
	
	
	
}
