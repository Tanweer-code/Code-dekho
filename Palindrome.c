#include<stdio.h>

//Check number is palindrome or not.
int main(){
   int last,a,rev=0,num;
   printf("Enter the number to check palindrome or not\n");
   printf("Enter the number\n");
   scanf("%d",&num);
   a=num;
 while(num!=0){
 last=num%10;
 num=num/10;
 rev=rev*10+last;
 }
 if(rev==a){
 printf("%d is palindrome",a);
 }
 else{
    printf("%d is not palindrome",a);
 }

  return 0;
}
