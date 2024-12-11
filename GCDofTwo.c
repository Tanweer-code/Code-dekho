#include<stdio.h>
#include<conio.h>

/*GCD of two numbers*/
                     
int main(){
   int num1,num2,dividend,divisor,remainder;
   printf("Enter two number to check HCF of number\n");
   printf("Enter first number\n");
   scanf("%d",&num1);
   printf("Enter second number\n");
   scanf("%d",&num2);
   if(num1>num2){
    dividend=num1;
    divisor=num2;
   }
   else{
      dividend=num2;
      divisor=num1;
   }
   while(divisor){
    remainder=dividend%divisor;

    dividend=divisor;
    divisor=remainder;
   
   }
   printf("%d is hcf",dividend);
   
      return 0;
   }
   