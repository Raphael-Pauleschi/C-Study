#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h> 

int main(void){
	
setlocale(LC_ALL,"Portuguese");

char Z[10],Y[10];

printf ("\n Entre com o periodo que você estuda:");
printf ("\n");
scanf ("%s",&Z);
if (strcmp(Z,"Vesperino")==0)
printf ("\n Boa Tarde");
else
if (strcmp(Z,"Manha")==0)
printf ("\n Bom dia");
else
if (strcmp(Z,"Noturno")==0)
printf ("\n Boa Noite");
else
if (strcmp(Z,"Tarde")==0)
printf ("\n Boa Tarde");
else
if (strcmp(Z,"Matutino")==0)
printf ("\n Bom dia");
else
if (strcmp(Z,"Noite")==0)
printf ("\n Boa Noite");
else
if (strcmp(Z,"V")==0)
printf ("\n Boa Tarde");
else
if (strcmp(Z,"M")==0)
printf ("\n Bom dia");
else
if (strcmp(Z,"N")==0)
printf ("\n Boa Noite, ");
else
printf ("\n Valor invalido...");
printf ("\n");
system ("PAUSE");
}



