#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

int main (void){

setlocale(LC_ALL,"Portuguese");

int A,B,C,E,F;

E=0;


Beep (2300,1000);
Beep (2400,1000);
Beep (2500,1000);
srand (time(NULL));
printf ("Entre com o máximo de tentativas:");
printf ("\n");scanf ("%d",&F);system ("cls");
while (F!=0){	
A=rand() % 3;
printf ("Pontuação: %d        Tentativas restantes: %d",E,F);
printf ("\n");
printf ("\n   0   ");printf ("   1   ");printf ("   2   ");
printf ("\n   XX  ");printf ("   XX  ");printf ("   XX  ");
printf ("\n  XXXX ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n  XXXX ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n XXXXXX");printf (" XXXXXX");printf (" XXXXXX");
printf ("\n");
printf ("\nEm qual copo está a moeda?");
printf ("\n");
scanf ("%d",&B);
while (B>2){
printf ("\nValor invalido");
printf ("\n");
scanf ("%d",&B);
}
if ((A==0)&&(B==0)){
printf ("\n   0    ");
printf ("\n   XX   ");
printf ("\n  XXXX  ");printf ("   1   ");printf ("   2   ");
printf ("\n  XXXX  ");printf ("   XX  ");printf ("   XX  ");
printf ("\n XXXXXX ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n        ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n   XXX  ");printf (" XXXXXX");printf (" XXXXXX");
}
if ((A==1)&&(B==1)){
printf ("\n   1    ");
printf ("\n   XX   ");
printf ("\n  XXXX  ");printf ("   0   ");printf ("   2   ");
printf ("\n  XXXX  ");printf ("   XX  ");printf ("   XX  ");
printf ("\n XXXXXX ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n        ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n   XXX  ");printf (" XXXXXX");printf (" XXXXXX");
}
if ((A==2)&&(B==2)){
printf ("\n   2    ");
printf ("\n   XX   ");
printf ("\n  XXXX  ");printf ("   0   ");printf ("   1   ");
printf ("\n  XXXX  ");printf ("   XX  ");printf ("   XX  ");
printf ("\n XXXXXX ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n        ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n   XXX  ");printf (" XXXXXX");printf (" XXXXXX");
}
if ((A==0)&&(B!=0)){
printf ("\n   0    ");
printf ("\n   XX   ");
printf ("\n  XXXX  ");printf ("   1   ");printf ("   2   ");
printf ("\n  XXXX  ");printf ("   XX  ");printf ("   XX  ");
printf ("\n XXXXXX ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n        ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n   XXX  ");printf (" XXXXXX");printf (" XXXXXX");
}
if ((A==1)&&(B!=1)){
printf ("\n   1    ");
printf ("\n   XX   ");
printf ("\n  XXXX  ");printf ("   0   ");printf ("   2   ");
printf ("\n  XXXX  ");printf ("   XX  ");printf ("   XX  ");
printf ("\n XXXXXX ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n        ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n   XXX  ");printf (" XXXXXX");printf (" XXXXXX");
}
if ((A==2)&&(B!=2)){
printf ("\n   2    ");
printf ("\n   XX   ");
printf ("\n  XXXX  ");printf ("   0   ");printf ("   1   ");
printf ("\n  XXXX  ");printf ("   XX  ");printf ("   XX  ");
printf ("\n XXXXXX ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n        ");printf ("  XXXX ");printf ("  XXXX ");
printf ("\n   XXX  ");printf (" XXXXXX");printf (" XXXXXX");
}

if (A==B){
printf ("\n");
printf ("\nAcertou");
E=E+1;	
}
if (A!=B){
printf ("\n");
printf ("\nErrou");
F=F-1;	
}
getch();
system ("cls");
printf ("Espere...");
Beep (1000,1000);
Beep (1100,1000);
Beep (1200,1000);
system ("cls");
}
printf ("Fim de Jogo");
printf ("\nPontuação final: %d",E);
getch ();
}
