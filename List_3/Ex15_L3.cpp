#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void){
 
setlocale(LC_ALL,"Portuguese");

int B;
float T,U;

printf ("Entre com 2 valores");
printf ("\n");
scanf ("%f",&T);
scanf ("%f",&U);
system ("cls");
B=0;
while (B!=5){
printf ("\nMenu");
printf ("\n1- Multiplicação ");
printf ("\n2- Divisão ");
printf ("\n3- Adição");
printf ("\n4- Subtração ");
printf ("\n5- Sair");
printf ("\n");
printf ("Entre com a função:");
printf ("\n");
scanf ("%d",&B);
system ("cls");
if (B==1){
printf ("%f * %f = %f",T,U,T*U);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==2){
printf ("%f / %f = %f",T,U,T/U);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==3){
printf ("%f + %f = %f",T,U,T+U);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==4){
printf ("%f - %f = %f",T,U,T-U);
printf ("\n");
system ("PAUSE");
system ("cls");
}
if (B==5){
printf ("\nFim do Programa");
printf ("\n");
system ("PAUSE");
}
}
}
