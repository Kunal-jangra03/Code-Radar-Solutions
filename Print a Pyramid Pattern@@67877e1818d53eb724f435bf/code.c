#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=1;i<=a;i=i+3){
        for(j=1;j<=i;j=j+3){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}