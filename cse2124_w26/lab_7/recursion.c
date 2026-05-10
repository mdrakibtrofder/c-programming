#include<stdio.h>
int f(int n){
    if(n==1||n==0){
        return 1;
    }
    return f(n-1)+f(n-2);
}

int main(){
int n = 12;
printf("%d",f(n));
}