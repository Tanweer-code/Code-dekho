#include<stdio.h>
#include<conio.h>
//Check the number is armstrong or not Actual version.
int main(){
   int i,last,num,a,b,count=0,sum,exp,result;
   printf("Enter the number to check armstrong or not\n");
    scanf("%d",&num);
    a=num;
    b=num;
   while(num!=0){
    num=num/10;
    count++;
   }result=0;
   while(a!=0){
    last=a%10;
    a=a/10;
    exp=1;
    for(i=1;i<=count;i++)
        exp=exp*last;
        result=result+exp;
    
   }
   if(result==b){
    printf("%d Armstrong number",b);
   }else
   {
    printf("%d Not",b);
   }
return 0;
}