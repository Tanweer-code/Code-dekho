//using recursion to convert decimal to binary n>0
#include<stdio.h>
#include<conio.h>
void bin(int n);
int main(){
  int num;
  printf("Enter the number to convert to decimal to binary\n");
  printf("Enter the number =  ");
  scanf("%d",&num);
  bin(num);
}
void bin(int n){
  if(n==0||n==1){
    printf("%d",n);
    return;
  }else{
    bin(n/2);
    printf("%d",n%2);
  }
}

