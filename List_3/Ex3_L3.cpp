#include<stdio.h>
#include<windows.h>
int main (void){

int A,L,B,C;	
	
printf("Entre com um valor:");	
scanf("%d",&A);
L=99;
printf("%d  ",A);
while(L!=0){
A=A+1;	
printf("%d  ",A);
Beep(1,50);	
L=L-1;	
B=B+A;	
}
Beep(1,500);	
system("cls");
printf("\n a soma e de:%d",B);
C=B;
C=C/100;
Beep(1,200);
printf("\n A media e:%d",C);	



}
