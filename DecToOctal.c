//Using recursion to convert decimal to octal
#include<stdio.h>
void oct(int a);
int main(){
  int num1,result;
  printf("Enter the number to convert decimal to octal : \n");
  scanf("%d",&num1);
 oct(num1);

return 0;
}
void oct(int a){
if(a<8 && a>-8){
  printf("%d",a%8);
}else{
 oct(a/8); 
 printf("%d",a%8);
}

}

