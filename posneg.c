#include<stdio.h>
#include<conio.h>
//C program to print e to the power x
float main(){
   float a=0.0,b,k,num,pow,i,j,fact,exp,sum;
   printf("Enter the number to print sum of n terms of e to the power x\n");
   scanf("%f",&num);
   b=num;
    sum=0.0;
   for(i=1;i<=num;i++){
    exp=1.0;
   
    for(j=1;j<=i;j++){
      exp=exp*num;
      }
      fact=1.0;
      for(k=1;k<=i;k++){
        
         fact=fact*k;
      }
       sum=sum+exp/fact;

    }
    printf("%f",sum+1);
   return 0;
   }
   