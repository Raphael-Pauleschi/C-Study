#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void){
 
setlocale(LC_ALL,"Portuguese");

int X,D,A;

printf ("\nEntre com o valor para a fatorial");
printf ("\n");
scanf ("%d",&D);
X=D;
for(A = 1; D > 1; D = D - 1){
printf ("\n%d * %d",A,D);
A=A*D;
printf (" = %d",A);
}
printf ("\n");
printf ("\nO fatorial de %d é: %d",X,A);
printf ("\n");
system ("PAUSE");
}
