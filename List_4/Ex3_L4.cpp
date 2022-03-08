#include <stdio.h>
#include <locale.h>

int main(void){
	
setlocale(LC_ALL,"portuguese");	
int a[10],b[10],i;

for(i=1;i<=10;i++){
printf("Insira o %dº valor: ",i); scanf("%d",&a[i]);
b[i]=a[i]*4;
}


printf("\n\nVetor A.\n");
for(i=1;i<=10;i++){
printf("(A) %d :: %d\n",i,a[i]);
}

printf("\n\nVetor b.\n");
for(i=1;i<=10;i++){
printf("(B) %d :: %d\n",i,b[i]);
}
}
//  Ler 10 elementos de uma Matriz A tipo vetor.
// Construir uma Matriz B de mesmo tipo com os mesmos elementos de A multiplicados por 4. Apresente A e B.
