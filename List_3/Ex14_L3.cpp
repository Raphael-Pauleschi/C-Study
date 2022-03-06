#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (void){
int A[20],A1[20],D,B,C,F;

B=1;
while (B<=10){
printf ("\nEntre com o valor %d",B);printf ("\n");
scanf ("%d",&A[B]);
while ((A[B]>=20)||(A[B]<0)){
printf ("\nErro!");printf ("\nEntre com o valor %d",B);printf ("\n");
scanf ("%d",&A[B]);	
}
A1[B]=A[B];
B=B+1;
}
for (B=1; B<=20; B++){
for (C=B+1; C<=20; C++){
if (A[B] > A[C]){
D = A[B];
A[B] = A[C];
A[C] = D;
}
if (A[B] < A[C]){
D = A[C];
A[C] = A[B];
A[B] = D;
}
}	
}
F=A1[1]+A1[2]+A1[3]+A1[4]+A1[5]+A1[6]+A1[7]+A1[8]+A1[9]+A1[10]+A1[11]+A1[12]+A1[13]+A1[14]+A1[15]+A1[16]+A1[17]+A1[18]+A1[19]+A1[20]+A1[21]+A1[22]+A1[23]+A1[24]+A1[25];
printf ("\nO Maior valor : %d",A[B]);
printf ("\nO Menor valor : %d",A[C]);
printf ("\nA soma de todos: %d",F);
F=(A1[1]+A1[2]+A1[3]+A1[4]+A1[5]+A1[6]+A1[7]+A1[8]+A1[9]+A1[10]+A1[11]+A1[12]+A1[13]+A1[14]+A1[15]+A1[16]+A1[17]+A1[18]+A1[19]+A1[20])/20;		
printf ("\nA media artimetica: %d",F);
printf ("\nPercentual dos positivos: 100");
printf ("\nPercentual dos negativos: 0");
}
