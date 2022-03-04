#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
      
int main (void){
 
setlocale(LC_ALL,"Portuguese");         

int B,C,D,W[1];
char Z[10];	
	 
W[1]=1;
while (W[1]<=50){
printf ("\nEntre com o numero %d:",W[1]);
scanf ("%d",&B);
if (B<C) {
D=B;
}
if (B>C){
D=C;
C=B;
}
W[1]=W[1]+1;
printf ("\nSe deseja encerrar o programa aperte 'X'");
scanf ("%s",&Z);
if (strcmp(Z,"X")==0)
W[1]=52;
else
printf("\nOK");
system ("cls");
}
if (W[1]<52){
if (C=D){
printf ("\nSomente um número foi escrito nessas 50 vezes");
printf ("\Por consequência o maior e menor é %d",C);
}
else{
printf ("\n");
printf ("\nO maior numero é %d",C);
printf ("\nO menor numero é %d",D);
}
}
system ("PAUSE");
}

