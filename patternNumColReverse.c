#include<stdio.h>

/*Print      *
            **
           ***
          ****
         ***** */
                     
int main(){
   int row,col,n,k;
   printf("Enter the number to print star pattern\n");
   scanf("%d",&n);
   
   for(row=1;row<=n;row++){
      for(col=1;col<=(n+1)-row;col++){
         printf(" ");
         }
         for(k=1;k<=row;k++){
            printf("*");
         }
         printf("\n");
      }
      return 0;
   }
   
   