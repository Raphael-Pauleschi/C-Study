#include<stdio.h>

int main(){


    
	
int A[25]; 
   int B [25] ;
    int  C [25]; 
    int D [25]; 
  int F;

   for (F=1;F<=25;F=F+1){
   
      printf ("Entre com o valor %d",F);
      printf ("\n");
     scanf("%d",&A[F]);
      B[F]=A[F]*2;
      C[F]=A[F]*3;
      D[F]=A[F]*4;
}
   for (F=1;F<=25;F=F+1){ 
   
      printf ("\nNumero: %d",A[F]);
      printf ("\nO dobro: %d",B[F]);
      printf ("\nO triplo: %d",C[F]);
    printf ("\nO quadruplo: %d",D[F]);
    printf ("\n");
}
}


