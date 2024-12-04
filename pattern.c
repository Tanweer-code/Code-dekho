#include<stdio.h>
#include<conio.h>
/*Print 1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5*/
                     
int main(){
   int row,col;
   printf("Pattern row 5 col 5\n");
   for(row=1;row<=5;row++){
      for(col=1;col<=row;col++){
         printf(" %d",col);
      }
      printf("\n");
   }
   }
   
