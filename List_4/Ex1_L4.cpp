#include <stdio.h>

int main (void){
int A[10],B,C,D;

for (B=1;B<=10;B=B+1){
printf ("\nEntre com o valor %d",B);
printf ("\n");
scanf ("%d",&A[B]);
}
for (B=1;B<=9;B=B+1){
for (C=B+1;C<=10;C=C+1){
if (A[B]>A[C]){
D=A[B];
A[B]=A[C];
A[C]=D;
}
}
}
for (B=1;B<=10;B=B+1){
printf("\n%d",A[B]);
}

}
