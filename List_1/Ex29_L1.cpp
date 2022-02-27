#include<stdio.h>
#include<locale.h>

int main(void){
	
setlocale(LC_ALL,"Portuguese");

float R,F;

printf ("\n""Por favor, entre com sua altura:");
printf ("\n");
scanf ("%f",&R);
F= 62.1*R-44.7;
printf ("\n""Seu peso ideal é de ""%f",F); 
}
