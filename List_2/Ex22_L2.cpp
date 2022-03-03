#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

float R[10],F[10],L,K,M[10];

printf ("\n Entre com a nota do aluno 1: ");
printf ("\n");
scanf ("%f",&R[1]);
printf ("\n Entre com a nota do aluno 2: ");
printf ("\n");
scanf ("%f",&R[2]);
printf ("\n Entre com a nota do aluno 3: ");
printf ("\n");
scanf ("%f",&R[3]);
printf ("\n Entre com a nota do aluno 4: ");
printf ("\n");
scanf ("%f",&R[4]);
printf ("\n Entre com a nota do aluno 5: ");
printf ("\n");
scanf ("%f",&R[5]);
printf ("\n Entre com a nota do aluno 6: ");
printf ("\n");
scanf ("%f",&R[6]);
printf ("\n Entre com a nota do aluno 7: ");
printf ("\n");
scanf ("%f",&R[7]);
printf ("\n Entre com a nota do aluno 8: ");
printf ("\n");
scanf ("%f",&R[8]);
printf ("\n Entre com a nota do aluno 9: ");
printf ("\n");
scanf ("%f",&R[9]);
printf ("\n Entre com a nota do aluno 10: ");
printf ("\n");
scanf ("%f",&R[10]);
printf ("\n Entre com a RM do aluno 1: ");
printf ("\n");
scanf ("%f",&F[1]);
printf ("\n Entre com a RM do aluno 2: ");
printf ("\n");
scanf ("%f",&F[2]);
printf ("\n Entre com a RM do aluno 3: ");
printf ("\n");
scanf ("%f",&F[3]);
printf ("\n Entre com a RM do aluno 4: ");
printf ("\n");
scanf ("%f",&F[4]);
printf ("\n Entre com a RM do aluno 5: ");
printf ("\n");
scanf ("%f",&F[5]);
printf ("\n Entre com a RM do aluno 6: ");
printf ("\n");
scanf ("%f",&F[6]);
printf ("\n Entre com a RM do aluno 7: ");
printf ("\n");
scanf ("%f",&F[7]);
printf ("\n Entre com a RM do aluno 8: ");
printf ("\n");
scanf ("%f",&F[8]);
printf ("\n Entre com a RM do aluno 9: ");
printf ("\n");
scanf ("%f",&F[9]);
printf ("\n Entre com a RM do aluno 10: ");
printf ("\n");
scanf ("%f",&F[10]);
L=R[1];
if (R[2]>L)
L=R[2];
if (R[3]>L)
L=R[3];
if (R[4]>L)
L=R[4];
if (R[5]>L)
L=R[5];
if (R[6]>L)
L=R[6];
if (R[7]>L)
L=R[7];
if (R[8]>L)
L=R[8];
if (R[9]>L)
L=R[9];
if (R[10]>L)
L=R[10];
K=F[1];
if (F[2]<K)
K=F[2];
if (F[3]<K)
K=F[3];
if (F[4]<K)
K=F[4];
if (F[5]<K)
K=F[5];
if (F[6]<K)
K=F[6];
if (F[7]<K)
K=F[7];
if (F[8]<K)
K=F[8];
if (F[9]<K)
K=F[9];
if (F[10]<K)
K=F[10];
M[1]=(F[1]+R[1])/2;
M[2]=(F[2]+R[2])/2;
M[3]=(F[3]+R[3])/2;
M[4]=(F[4]+R[4])/2;
M[5]=(F[5]+R[5])/2;
M[6]=(F[6]+R[6])/2;
M[7]=(F[7]+R[7])/2;
M[8]=(F[8]+R[8])/2;
M[9]=(F[9]+R[9])/2;
M[10]=(F[10]+R[10])/2;
system ("cls");
printf ("\n A maior nota: %.2f",L);
printf ("\n O menor RM: %.2f",K);
printf ("\n");
printf ("\n Média do Aluno 1: %.2f",M[1]);
printf ("\n Média do Aluno 2: %.2f",M[2]);
printf ("\n Média do Aluno 3: %.2f",M[3]);
printf ("\n Média do Aluno 4: %.2f",M[4]);
printf ("\n Média do Aluno 5: %.2f",M[5]);
printf ("\n Média do Aluno 6: %.2f",M[6]);
printf ("\n Média do Aluno 7: %.2f",M[7]);
printf ("\n Média do Aluno 8: %.2f",M[8]);
printf ("\n Média do Aluno 9: %.2f",M[9]);
printf ("\n Média do Aluno 10: %.2f",M[10]);
printf ("\n");
system ("PAUSE");






}
