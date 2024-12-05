#include<stdio.h>

/*Print      *
            ***
           *****
          *******
           */
                     
int main(){
   int row,space,n,star;
   printf("Enter the number to print star pattern\n");
   scanf("%d",&n);
   
   for(row=1;row<=n;row++){
      for(space=1;space<=n-row;space++){
         printf(" ");
         }
         for(star=1;star<=(2*row)-1;star++){
            printf("*");
         }
         printf("\n");
      }
      return 0;
   }
   