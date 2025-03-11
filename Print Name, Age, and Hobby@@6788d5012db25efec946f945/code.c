#include <stdio.h>
int main(){
    int Age;
    char Name[99] ;
    char Hobby[99];
    scanf("%s %d %s",&Name,&Age,&Hobby);
    printf("Name: %s\nAge: %d\nHobby: %s\n",Name,Age,Hobby);
    return 0;
}