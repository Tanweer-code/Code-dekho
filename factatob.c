#include<stdio.h>

//Print the factorial of number from a to b.
int main(){
   int last,i,j,a,b,rev=0,num;
   printf("Enter the number to print reverse\n");
   printf("Enter the number\n");
   scanf("%d",&num);
   a=num;
 while(num!=0){
 last=num%10;
 num=num/10;
 rev=rev*10+last;
 }
 printf("%d reverse is %d",a,rev);

  return 0;
}