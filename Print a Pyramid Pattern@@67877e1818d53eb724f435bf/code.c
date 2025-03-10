#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for( int i=1;i<=a+2;i=i+2){
        for( int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}