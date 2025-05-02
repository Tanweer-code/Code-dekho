#include <stdio.h>

#include <conio.h>
int main(){
int i ,j,k;
for(i=0;i<=4;i++){
    for(k=4-i;k>=1;k--){
        printf(" ");
    }
    for(j=0;j<2*i+1;j++){
        
        printf("*");
       
        
    }
    printf("\n");
}
for(i=4;i>=1;i--){
    for(k=1;k<=5-i;k++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
       
            printf("*");
        
       
        
    }
    printf("\n");
}

}