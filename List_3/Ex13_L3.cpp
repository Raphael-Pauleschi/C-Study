#include<stdio.h>
#include<stdlib.h>
int main (void){
	
	
int A,B,C,D;

printf("\n Entre com o numero base:");
scanf("%d",&A);
printf("\n Entre com o numero do exponte:");
scanf("%d",&B);
B=B-1;
C=B;
D=A;
printf("\n%d",A);	
while(C!=0){
A=A*D;	
C=C-1;
printf("\n%d",A);		
}
}
