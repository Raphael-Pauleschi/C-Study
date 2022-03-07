#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main (void){
int A,B,C,D,E,F,G;

A=1;D=0;G=0;F=0;
while (A<=10){
E=0;B=0;
while ((E!=1)&&(E!=2)){
printf ("\nHomem ou Mulher:");
printf ("\n1-Mulher       2-Homem");
printf ("\n");
scanf ("%d",&E);
}

while ((B!=1)&&(B!=2)){
printf ("\nEntre com a cor do olho da pessoa %d",A);
printf ("\n1-Azul                       2-Castanho");
printf ("\n");
scanf ("%d",&B);
if ((E==2)&&(B==1))
D=D+1;
}

printf ("\nEntre com a idade do pessoa %d",A);
printf ("\n");
scanf ("%d",&C);
if (B==2){
if ((E==1)&&(C>50))
F=F+1;
if ((E==2)&&(C<34))	
G=G+1;
}
system ("cls");

A=A+1;	
}

system ("cls");
printf ("\nHomens de olhos azuis: %d",D);
printf ("\nHomens de olhos castanhos e menos de 34 anos: %d",G);	
printf ("\nMulheres de olhos castanhos e mais de 50 anos: %d",F);
getch();			
}
