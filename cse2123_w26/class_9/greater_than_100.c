/**
Write a C program to check whether a number is greater than 100
**/
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 100) {
        printf("The number %d is greater than 100.\n", num);
    } else {
        printf("The number %d is not greater than 100.\n", num);
    }

    return 0;
}