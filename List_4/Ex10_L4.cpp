#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
char A[25][25];
int B[25],C;

C=1;
while (C<=25){
printf ("\nEntre com o nome %d",C);
printf ("\n");
gets (A[C]);
C=C+1;	
}
C=1;
while (C<=10){
printf ("\nEntre com a idade de %s",A[C]);
printf ("\n");
scanf ("%d",&B[C]);
C=C+1;	
}

C=1;
while (C<=25){
printf ("\nNome: %s",A[C]);
printf ("\nIdade: %d",B[C]);
printf ("\n");
C=C+1;	
}
}
