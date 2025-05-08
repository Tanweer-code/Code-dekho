#include<stdio.h>
void sum(int*p,int n);
int main(){
  int a[4],i,j;
  printf("Enter the any four Number to print sum\n");
for(i=0;i<=3;i++){
  scanf("%d",&a[i]);
}
for(j=0;j<=3;j++){
  printf("%d ",a[j]);
}
sum(a,4);
}
void sum(int*p,int n){
int sum=0 ,k;
for(k=0;k<4;k++){
sum=sum+p[k];
}
printf("\nSum is %d",sum);
}
