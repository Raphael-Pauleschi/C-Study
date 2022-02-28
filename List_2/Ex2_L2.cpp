#include<stdlib.h>
#include<stdio.h>

int main(void){
int A,B,C,D;

printf ("\nDigite o primeiro numero inteiro: ");
printf ("\n");
scanf("%d", &A);
printf ("\nDigite o segundo  numero inteiro: ");
printf ("\n");
scanf ("%d",&B);
printf("\nDigite o terceiro numero inteiro: ");
printf ("\n");
scanf ("%d", &C);
if(A>B){
D=B;
B=A; 
A=D;
}
if(B>C){
D=C; 
C=B;
B=D;
}
if(A>B){
D=B;
B=A;
A=D;
}
printf ("\n%d",A);
printf ("\n%d",B);
printf ("\n%d",C);
printf ("\n");
system ("PAUSE");
}
