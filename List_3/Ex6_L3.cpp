#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

int A,P;

printf ("\nEntre com o valor:");
printf ("\n");
scanf ("%d",&A);
P=1;
system ("cls");
printf ("Tabuada do %d:",A);
while (P<=100){
printf ("\n%d * %d = %d",A,P,A*P);
P=P+1;
}
printf ("\n");
printf ("\n");
system ("PAUSE");
}
