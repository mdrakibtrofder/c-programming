#include<stdio.h>
int main(){
    char name[];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Your name is printed twice: %s %s ",name,name);
    return 0;
}