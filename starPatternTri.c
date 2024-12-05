#include<stdio.h>
#include<conio.h>

/*Print   *
          * * 
          * * *  
          * * * *
          * * * * *
          * * * *
          * * *
          * *
          * 
           */
                     
int main(){
   int row,k,n,star;
   printf("Enter the number to print star pattern\n");
   scanf("%d",&n);
   
   for(row=1;row<=n;row++){
         if(row>n/2){
              for(k=1;k<=(n+1)-row;k++){
                  printf("* ");
              }
     
       printf("\n");
       continue;
              
          }
      for(star=1;star<=row;star++){
        
      printf("* ");
      
         }
         printf("\n");
      }
      return 0;
   }
   
   
