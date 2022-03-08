#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
char A[15][15],B[15];
int C,D;

	
for(C=1; C<=15;C=C+1){
printf ("\nEntre com o nome %d",C);
printf ("\n");
gets (A[C]);
}

for(C=1;C<=15;C=C+1) {
	for(D=1;D<=15;D=D+1) {
		if(strcmp(A[C],A[D])<0){
		strcpy(B,A[C]);
		strcpy(A[C],A[D]);
		strcpy(A[D],B);
		}
	}
}

printf("\nNomes ordenados");
for(C=1;C<=15;C=C+1)
	printf("\n%s",A[C]);
}
