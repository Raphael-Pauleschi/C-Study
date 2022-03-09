#include <stdio.h>
#include <windows.h>

int main (void){
int A[10],B,C,D,F,G,H;

for (B=1;B<=10;B=B+1){
printf ("\nEntre com o valor %d",B);
printf ("\n");
scanf ("%d",&A[B]);
}
for (B=1;B<=10;B=B+1){
for (C=B+1;C<=10;C=C+1){
if (A[B]>A[C]){
D=A[B];
A[B]=A[C];
A[C]=D;
}
}
}
F=0;
while (F!=1){
printf ("\nDeseja que seja organizado em:");
printf ("\n1- Crescente");
printf ("\n2- Decrescente");
printf ("\n");
scanf ("%d",&G);
if (G==1){
for (B=1;B<=10;B=B+1)
printf ("\n%d",A[B]);
}
if (G==2){
for (B=10;B>=1;B=B+1)
printf ("%d",A[B]);
}
printf ("\nDeseja continuar?");
printf ("\n1- Positivo");
printf ("\n2- Negativo");
printf ("\n");
scanf ("%d",&H);
if (H==1){
F=0;
system ("cls");
}
else
F=1;
}
}
