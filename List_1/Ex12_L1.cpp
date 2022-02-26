#include<stdio.h>

int main(void){
		
int A;
float R,N,M,L,F;

printf ("Entre com as horas trabalhadas: ");
scanf ("%d",&A);
printf ("Entre com o percentual de descontos: ");
scanf ("%f",&R);
printf ("Entre com o valor ganho por horas trabalhadas: ");
scanf ("%f",&N);
M=A*N;
L=(R/100)*M;
F=M-L;
printf ("Salario Bruto: ""%f",M);
printf ("\n""Total de Desconto: ""%f",L);
printf ("\n""Salario Liquido: ""%f",F);
}
