#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=1;i<=4;i++){
        for(j=a;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}