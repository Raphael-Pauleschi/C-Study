#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

float T,L,K,Q,M,N;

printf ("\nEntre com o valor de A:");
printf ("\n");
scanf ("%f",&T);
printf ("\nEntre com o valor de B:");
printf ("\n");
scanf ("%f",&L);
printf ("\nEntre com o valor de C:");
printf ("\n");
scanf ("%f",&K);
Q=T*T-4*L*K;
if (Q==0){
M=(-T+sqrt(Q))/2*L;
printf ("\nDelta: %f",Q);
printf ("\nResultado: %f",M);
}
if (Q>0){
M=(-T+sqrt(Q))/2*L;
N=(-T-sqrt(Q))/2*L;
printf ("\nDelta: %f",Q);
printf ("\nResultado 1: %f",M);
printf ("\nResultado 2: %f",N);
}
if (Q<0) 
printf ("\nDelta não pertence aos reais!");
printf ("\n");
system ("PAUSE");
}
