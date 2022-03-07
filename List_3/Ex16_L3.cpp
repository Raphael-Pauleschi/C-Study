#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main (void){
 
setlocale(LC_ALL,"Portuguese");

int B,D,A,X;
float T,U;

B=0;
while (B!=10){
printf ("\nMenu");
printf ("\n1- Multiplicação ");
printf ("\n2- Divisão ");
printf ("\n3- Adição");
printf ("\n4- Subtração ");
printf ("\n5- Fatorial"); 
printf ("\n6- Raiz Quadrada");
printf ("\n7- Quadrado");
printf ("\n8- Cubo");
printf ("\n9- Quadruplo");
printf ("\n10- Sair");
printf ("\n");
printf ("Entre com a função:");
printf ("\n");
scanf ("%d",&B);
system ("cls");
if (B==1){
printf ("Entre com 2 valores");
printf ("\n");
scanf ("%f",&T);
scanf ("%f",&U);
printf ("\n");
printf ("%f * %f = %f",T,U,T*U);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==2){
printf ("Entre com 2 valores");
printf ("\n");
scanf ("%f",&T);
scanf ("%f",&U);
printf ("\n");
printf ("%f / %f = %f",T,U,T/U);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==3){
printf ("Entre com 2 valores");
printf ("\n");
scanf ("%f",&T);
scanf ("%f",&U);
printf ("\n");
printf ("%f + %f = %f",T,U,T+U);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==4){
printf ("Entre com 2 valores");
printf ("\n");
scanf ("%f",&T);
scanf ("%f",&U);
printf ("\n");
printf ("%f - %f = %f",T,U,T-U);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==5){
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
system ("cls");
}
if (B==6){
printf ("\nEntre com o valor ");
printf ("\n");
scanf ("%d",&X);
T=sqrt(X);
printf ("A raiz quadrda de %d é: %f",X,T);
printf ("\n");
system ("PAUSE");
system ("cls");	
}
if (B==7){
printf ("\nEntre com o valor ");
printf ("\n");
scanf ("%d",&X);
D=pow(X,2);
printf ("\n%d² = %d",X,D);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==8){
printf ("\nEntre com o valor ");
printf ("\n");
scanf ("%d",&X);
D=pow(X,3);
printf ("\n%d³ = %d",X,D);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==9){
printf ("\nEntre com o valor ");
printf ("\n");
scanf ("%d",&X);
D=X*4;
printf ("\n%d * 4 = %d",X,D);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==10){
printf ("\nFim do Programa");
printf ("\n");
system ("PAUSE");
}
}
}
