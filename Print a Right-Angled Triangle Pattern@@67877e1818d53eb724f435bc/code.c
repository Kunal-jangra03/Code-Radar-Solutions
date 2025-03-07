#include <stdio.h>
int main(){
    int n;
    printf("enter an number");
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        for(int j=i;j<=i;j++){
            pprintf("*");
        }
        printf(\n);
    }
    return 0;
    }