#include<stdio.h>

//Strong Number.
int main(){
   int i,last,num,a,b,count=0,sum=0,exp,fact;
   printf("Enter the number to check strong or not\n");
    scanf("%d",&num);
    a=num;
  while(num>0){
   last=num%10;
   num=num/10;
   fact=1;
   for(i=1;i<=last;i++){
      fact=fact*i;
   }
   sum=sum+fact;
  }
  if(sum==a){
printf("Strong number %d",a);
  }
  else("Not strong %d",a);
  return 0;
}
