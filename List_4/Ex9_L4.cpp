#include<stdio.h>
#include<stdlib.h>
int main ()
{

int maior,num,x;
for(x=1;x<=10;x++){
printf("Escreva um %d numero",x);
printf ("\n");
scanf("%d",&num);
if(x==1){
maior=num;
}else{
if(num>maior){
maior=num;
}
}
}
printf("%d",maior);
}


