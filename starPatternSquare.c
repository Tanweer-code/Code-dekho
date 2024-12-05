#include<stdio.h>
#include<conio.h>

/*Print   * * * * *
          *       * 
          *       *  
          *       * 
          * * * * *
           */
                     
int main(){
   int row,k,n,space;
   printf("Enter the number to print empty square pattern\n");
   scanf("%d",&n);
   
   for(row=1;row<=n;row++){
    if(row>1&&row<n){
                printf("* ");
                for(space=1;space<=n-2;space++){
                    printf("  ");
                }
                printf("*");
                printf("\n");
                continue;
              }
          for(k=1;k<=n;k++){
                  printf("* ");
              }
              
     
       printf("\n");
       
      }
      return 0;
   }
   