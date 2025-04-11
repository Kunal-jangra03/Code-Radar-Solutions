#include<stdio.h>
#include<math.h>
int  isPrime(int num){
    if(num<=1){
        printf("1");
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}