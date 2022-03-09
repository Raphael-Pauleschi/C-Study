#include <stdio.h>
#include <stdlib.h>

int main (void){
int A[10],B;

B=1;
while (B<=10){
printf ("\nEntre com o valor %d",B);
printf ("\n");
scanf ("%d",&A[B]);
B=B+1;	
}
B=10;
while (B>=1){
printf ("\n%d",A[B]);
B=B-1;	
}


	
}
