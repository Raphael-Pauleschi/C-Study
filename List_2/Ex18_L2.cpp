#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(void){
	
setlocale(LC_ALL,"Portuguese");

float R[10],K,L;
int A;

A=0;
printf ("\nEntre com os 10 valores");
printf ("\n");
scanf ("%f",&R[1]);
scanf ("%f",&R[2]);
scanf ("%f",&R[3]);
scanf ("%f",&R[4]);
scanf ("%f",&R[5]);
scanf ("%f",&R[6]);
scanf ("%f",&R[7]);
scanf ("%f",&R[8]);
scanf ("%f",&R[9]);
scanf ("%f",&R[10]);
L=R[1]+R[2]+R[3]+R[4]+R[5];
K=(L+R[6]+R[7]+R[8]+R[9]+R[10])/10;
if (R[1]>K)	
A=A+1;
if (R[2]>K)	
A=A+1;
if (R[3]>K)	
A=A+1;
if (R[4]>K)	
A=A+1;
if (R[5]>K)	
A=A+1;
if (R[6]>K)	
A=A+1;
if (R[7]>K)	
A=A+1;
if (R[8]>K)	
A=A+1;
if (R[9]>K)	
A=A+1;
if (R[10]>K)	
A=A+1;
printf ("\nA média dos valores: %f",K);
printf ("\nQuantidade de valores acima da média: %d",A);
A=10-A;
printf ("\nQuantidade de valores abaixo da média: %d",A);
printf ("\n");
system ("PAUSE");
}
