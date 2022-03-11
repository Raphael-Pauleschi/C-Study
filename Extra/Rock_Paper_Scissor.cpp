#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

int main (void){

setlocale(LC_ALL,"Portuguese");

int A,B,C,E,F,G,H;
char D[20];

C=0;
B=0;
F=0;
G=0;

Beep (100,1000);
Beep (200,1000);
Beep (300,1000);
srand (time(NULL));
printf ("Entre com o limite de pontos:");
printf ("\n");
scanf ("%d",&H);
if (H>8000){
printf ("\nNappa: Afinal, quanto é o limite de pontos do Kakarotto?");
printf ("\nVegeta: É superior á 8000!");
printf ("\nNappa: Superior á 8000? Deve ter alguma coisa errada, isso dai");
printf ("\ndeve tá quebrado!");
}
getch();
system ("cls");
while ((C<H)&&(B<H)){
A=rand() % 3;
printf ("Rodada:%d                  Limite:%d",F,H);
printf ("\nJogador:%d                 CPU:%d",C,B);
printf ("\n              Empate:%d             ",G);
printf ("\n");
printf ("\nPedra,Papel ou Tesoura?");
printf ("\n");
scanf ("%s",&D);
printf ("\nCPU:");
printf ("\n");
if (strcmp(D,"Pedra")==0){
E=0;
}
else
if (strcmp(D,"Tesoura")==0){
E=1;
}
else
if (strcmp(D,"Papel")==0){
E=2;
}
else{
printf ("\n");
printf ("\n*Valor Invalido*");
A=4;	
}
if (A==0)
printf ("Pedra");
if (A==1)
printf ("Tesoura");
if (A==2)
printf ("Papel");
if (E==A){
printf ("\nEmpate");
G=G+1;
}
if ((E==0)&&(A==1))
C=C+1;
if ((E==1)&&(A==2))
C=C+1;
if ((E==2)&&(A==0))
C=C+1;
if ((A==0)&&(E==1))
B=B+1;
if ((A==1)&&(E==2))
B=B+1;
if ((A==2)&&(E==0))
B=B+1;
getch();
F=F+1;
system ("cls");
}
if (B==H){
Beep (2000,100);
Beep (2100,100);
Beep (2200,100);
printf ("\nVocê Perdeu!");
}
if (C==H){
Beep (400,100);
Beep (500,100);
Beep (600,100);
Beep (799,100);
printf ("\nVocê Ganhou!");
}
printf ("\n");
printf ("\nRodadas: %d",F);
if ((C==H)&&(B==H)){
system ("color 9F");
Beep (999,100);
system ("Color 8A");
printf ("\n");
printf ("\nErro!");	
}
getch();
}
