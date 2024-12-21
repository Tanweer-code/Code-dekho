//Using recursion to calculate the number of digits in a number where number >=0
#include<stdio.h>
int dig(int a);
int main(){
  int num1,result;
  printf("Enter the number 'n>=0' to calculate no. of digits : \n");
  scanf("%d",&num1);
  result=dig(num1);
  printf("Answer is %d",result);

return 0;
}
int dig(int a){
  if(a<=9){
    return 1;
  }else{
    return 1+dig(a/10);
  }
}


