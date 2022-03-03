#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h> 
#include<math.h>
#include<windows.h>
      
int main (void){
 
setlocale(LC_ALL,"Portuguese");

int B,C,D,G,X;

printf ("\nPor favor,digite um limite: ");
printf ("\n");
scanf ("%d",&B);
printf ("\n");
C=0;
D=1;
X=1;
printf ("\n%d",X);
while (B>X){
G=C+D;
C=D;
D=G;
printf ("\n%d",G);
X=X+1;
}
printf ("\n");
system ("PAUSE");
}
