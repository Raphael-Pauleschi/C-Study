#include<stdio.h>
#include<stdlib.h>

int main(void){
	
int A,B,C;
	
printf ("\nEntre com 2 valores:");
printf ("\n");
scanf ("%d",&A);
scanf ("%d",&B);
if (A>B){
C=A-B;
printf ("\n%d - %d = %d",A,B,C);
}
else{
C=B-A;
printf ("\n%d - %d = %d",B,A,C);
}
printf ("\n");
system ("PAUSE");
}
