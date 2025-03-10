#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for( int i=1;i<=a*2;i=i+2){
        for( int j=1;j<2*(a-i-1);j++){
             printf(" ");
        }
        for(int k=1;k<2*(a+i+1);k++){
             printf("*");
        }
       
        
        printf("\n");
    }
    return 0;
}