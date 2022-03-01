#include <stdio.h>  
#include <stdlib.h> 
#include<locale.h>
  
int main(void){

setlocale (LC_ALL,"Portuguese");

int A,B,C,D,E,P,I,V;
        
        
printf ("Entre com os 5 valores:");
printf ("\n");        
scanf("%d", &A);
scanf("%d", &B);
scanf("%d", &C);
scanf("%d", &D);
scanf("%d", &E);
printf("%4d%4d%4d%4d%4d\n",A,B,C,D,E);
P=A;
A=D;
D=P;
I=B;
V=E;
B=V;
E=C;
C=I;
printf ("  Números trocados!");
printf("\n""%4d%4d%4d%4d%4d\n",A,B,C,D,E);
printf ("\n");
system ("PAUSE");
}
