#include<stdio.h>
#include<stdlib.h>

int main(void){

int A,B;
float L,K;

printf ("\nEntre com o valor da temperatura: ");
printf ("\n");
scanf ("%f",&L);
system ("cls");
printf ("\nDeseja que seja transformado de:");
printf ("\n1- Celsius");
printf ("\n2- Fahrenheit");
printf ("\n3- Kelvin");
printf ("\n");
scanf ("%d",&A);
system ("cls");
if (A==1){
printf ("\nDe Celsius para:");
printf ("\n1- Fahrenheit");
printf ("\n2- Kelvin");
printf ("\n");
scanf ("%d",&B);
if (B==1){	
K=(9*L+160)/5;
printf ("\nEm Fahrenheit ficaria: %f",K);
}
if (B==2){
K=L+273.15;
printf ("\nEm Kelvin ficaria: %f",K);
}
}
if (A==2){
printf ("\nDe Fahrenheit para:");
printf ("\n1- Celsius");
printf ("\n2- Kelvin");
printf ("\n");
scanf ("%d",&B);
if (B==1){
K=(5*(L-32))/9;
printf ("\nEm Celsius ficaria: %f",K);
}
if (B==2){
K=(L+459.67)/1.8;
printf ("\nEm Kelvin ficaria: %f",K);	
}
}
if (A==3){
printf ("\nDe Kelvin para:");
printf ("\n1- Celsius");
printf ("\n2- Fahrenheit");
printf ("\n");
scanf ("%d",&B);
if (B==1){
K=L-273.15;	
printf ("\nEm Celsius ficaria: %f",K);
}
if(B==2){
K=L*1.8-459.67;	
printf ("\nEm Fahrenheit ficaria: %f",K);
}
}
printf ("\n");
system ("PAUSE");
}
