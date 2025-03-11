#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=5;i<=10;i++){
        for(j=1;j<=n*10;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
    
}