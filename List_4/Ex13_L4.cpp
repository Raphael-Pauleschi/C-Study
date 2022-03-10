#include<stdio.h>
int main ()
{
int A [25],B[25];
int i;


for(i=0;i<25;i++){
printf("Digite um numero: ");
printf ("\n");
scanf("%d",&A[i]);
B[i]=A[i]-100;
}
for(i=0;i<25;i++)
printf ("\n%d",B[i]);
}



