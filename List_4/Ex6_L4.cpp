#include <stdio.h>

int main (void){

int A[5],B[5],C[5],D;

for (D=1;D<=5;D=D+1){
printf ("\nEntre com a matriz A%d",D);
printf ("\n");
scanf ("%d",&A[D]);
printf ("\nEntre com a matriz B%d",D);
printf ("\n");
scanf ("%d",&B[D]);
C[D]=A[D]+B[D];
}
printf ("\n");
for (D=1;D<=5;D=D+1)
printf ("\n%d + %d = %d",A[D],B[D],C[D]);
}
