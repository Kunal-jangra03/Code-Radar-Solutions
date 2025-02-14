#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral");
    }
    if(a!=b && b!=c && c!=a){
        printf("Scalene");
    }
    if((a==b && a!=c) (b==c && c!=a) (c==a && c!=b)){
        printf("Isosceles");
    }
    return 0;
}