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
if ((J[P]>A)&&(J[P]%2==0))
A=J[P];
if ((J[P]<B)&&(J[P]%2!=0))
B=J[P];
P=P+1;
}
system ("cls");
printf ("\nO maior valor par é: %d",A);
printf ("\nO menor valor impar é: %d",B);
printf ("\n");
system ("PAUSE");
}
