#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");
int J[10],P,A,B;

P=1;
while (P<11){
printf ("Entre com o valor %d:",P);
printf ("\n");
scanf ("%d",&J[P]);
P=P+1;
}
A=J[1];
B=J[1];
P=2;
while (P<11){
if (J[P]>A)
A=J[P];
if (J[P]<B)
B=J[P];
P=P+1;
}
system ("cls");
printf ("\nO maior valor é: %d",A);
printf ("\nO menor valor é: %d",B);
printf ("\n");
system ("PAUSE");
}
