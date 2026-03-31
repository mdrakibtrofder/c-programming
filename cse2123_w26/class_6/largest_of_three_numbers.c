/**
Write a C program to find the largest of three numbers
**/
#include <stdio.h>

int main() {
    int a = 5, b = 8, c = 3;

    if (a > b && a > c) {
        printf("a is largest number\n");
    } else if (b > c) {
        printf("b is largest number\n");
    } else {
        printf("c is largest number\n");
    }

    return 0;
}