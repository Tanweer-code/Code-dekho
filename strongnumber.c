#include<stdio.h>

//Print the factorial of number from a to b.
int main(){
   int i,j,a,b,fact;
   printf("Enter the number to print the factorial of nummber from a to b\n");
   printf("Enter the starting number\n");
   scanf("%d",&a);
   printf("Enter the last number\n");
   scanf("%d",&b); 
 for(i=a;i<=b;i++){
    fact=1;
    for(j=1;j<=i;j++){
        fact=fact*j;
        }
        printf("Fact = %d\n",fact);
    
 }

  return 0;
}