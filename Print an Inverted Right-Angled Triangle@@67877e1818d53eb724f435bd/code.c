#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=4;i++){
        for(int j=a;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}