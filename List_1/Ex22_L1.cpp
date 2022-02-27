#include <stdio.h>  
#include <stdlib.h>   
int main(void){


int A,B,C;
        
        
printf ("Entre com os 2 valores:");
printf ("\n");        
scanf("%d", &A);
scanf("%d", &B);
printf("%4d%4d\n",A,B);
C=A;
A=B;
B=C;
printf ("  TROCAR!");
printf("\n""%4d%4d\n",A,B);
printf ("\n");
system ("PAUSE");
   }
