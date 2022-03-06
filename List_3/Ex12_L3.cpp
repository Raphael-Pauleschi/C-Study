#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
 
int main (){
int C,B,D,E,F,G;

setlocale (LC_ALL,"Portuguese");

printf ("Somatoria");
G=0;
E=0;
C=2;
while(C<1000){
D=E+C;
E=C;
B=C+C;
printf ("\n%d",B);
G=G+1;
C=C+2;
}
F=E/G;
printf ("\n");
printf ("\nA soma de todos os números: %d",D);
printf ("\nA média de todos os números: %d",F);
getch();
}
