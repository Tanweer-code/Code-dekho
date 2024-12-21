// a to the power b
#include<stdio.h>
int exp(int a,int b);
int main(){
  int num1,num2,result=1;
  printf("Enter the base and exponent\n");
  printf("Please enter base greater than zero and exponent greater than zero\n");
  printf("Enter the base: ");
  scanf("%d",&num1);
  printf("Enter the exponent: ");
  scanf("%d",&num2);
  result=exp(num1,num2);
  printf("Answer is %d",result);

return 0;
}
int exp(int a,int b){
  if(b==1){
    return a;
  }else{
    return a*pow(a,b-1);
  }
}


