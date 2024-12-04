#include<stdio.h>
#include<conio.h>
//Check number is armstrong or not easy version.
int main(){
   int last,num,a,sum=0;
   printf("Enter the number to check armstrong or not\n");
   scanf("%d",&num);
   a=num;
   while(num!=0){
    last=num%10;
    num=num/10;
    sum=sum+(last*last*last);
   }
   if(sum==a){
    printf("Armstrong number");
   }else{
    printf("Not");
   }

}