#include <stdio.h>
#include <math.h>

int main (void){

double A,B;

A=0;
while (A<100){
B=pow(3,A);	
printf ("\n%.0f",B);
A=A+1;
}
}
