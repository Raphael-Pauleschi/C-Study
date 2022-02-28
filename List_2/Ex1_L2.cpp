#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int P;
float R[4];

P=1;
while (P<5){
printf ("\nEntre com a média do aluno %d:",P);
printf ("\n");
scanf ("%f",&R[P]);
P=P+1;
}
P=1;
while (P<5){
if (R[P]>=8.5)
printf ("\nAluno %d está Aprovado",P);
if ((R[P]>6)&&(R[P]<8.5))
printf ("\nAluno %d está de Exame",P);
if (R[P]<=6)
printf ("\nAluno %d está Reprovado!",P);
P=P+1;
}
printf ("\n");
system ("PAUSE");
}
