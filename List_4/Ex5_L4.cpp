#include <stdio.h>

int main (void){

int A[20],B[20],C,D;

for (C=1;C<=20;C=C+1){
printf ("\nEntre com o valor %d",C);
printf ("\n");
scanf ("%d",&A[C]);
}
C=1;
for (D=20;D>=1;D=D-1){
B[D]=A[C];
C=C+1;
}
printf ("\n");
for (C=1;C<=20;C=C+1)
printf ("%d ",A[C]);
printf ("\nInvertidos:");
printf ("\n");
for (C=1;C<=20;C=C+1)
printf ("%d ",B[C]);

}
