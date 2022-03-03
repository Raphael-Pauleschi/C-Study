#include<stdio.h>
#include<stdlib.h>
#include<locale.h>         	 
		 
int main (void){

int X,A,Pe,Tr,Mu,Na,Bo;
float K;
double K1;
setlocale(LC_ALL,"Portuguese");

A=0;
Pe=0;
Tr=0;
Mu=0;
Na=0;
Bo=0;
printf ("\nOpção de candidatos:");
printf ("\n"); 
printf ("\nPequi:20");
printf ("\nTrena:30");
printf ("\nNanco:15");
printf ("\nMumbo:26");
printf ("\nBonco:37");
while (X!=-1){
printf  ("\nPara encerrar digite '-1'");
printf  ("\nDigite seu voto: ");
printf ("\n");
scanf ("%d",&X);
A=A+1;
if ((X!=20)&&(X!=30)&&(X!=15)&&(X!=26)&&(X!=37)){
printf ("\nVoto INVÁLIDO");
A=A-1;}
if (X==20) 
Pe=Pe+1;
if (X==30)
Tr=Tr+1;
if (X==15)
Na=Na+1;
if (X==26)
Mu=Mu+1;
if (X==37)
Bo=Bo+1;
if (X==-1)
A=A-1;
}
system ("cls");
K=A;
printf ("\nTotal de votos: %.0f",K);
printf ("\n"); 
K1=Pe/K*100;
printf ("\nPercentual de votos: Pequi: %.2f",K1);
printf ("\nTotal de votos de Pequi: %d", Pe);
printf ("\n"); 
K1=Tr/K*100;
printf ("\nPercentual de votos: Trena: %.2f",K1);
printf ("\nTotal de votos de Trena: %d", Tr);
printf ("\n"); 
K1=Na/K*100;
printf ("\nPercentual de votos: Nanco: %.2f",K1);
printf ("\nTotal de votos de Nanco: %d", Na);
printf ("\n");  
K1=Mu/K*100;
printf ("\nPercentual de votos: Mumbo: %.2f",K1);
printf ("\nTotal de votos de Mumbo: %d", Mu);
printf ("\n"); 
K1=Bo/K*100;
printf ("\nPercentual de votos: Bonco: %.2f",K1);
printf ("\nTotal de votos de Bonco: %d", Bo);
printf ("\n");
system ("PAUSE");
}

