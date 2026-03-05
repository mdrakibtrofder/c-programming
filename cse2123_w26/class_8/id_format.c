/**
Write a C program to print department id and roll in format: 04_11
**/
#include <stdio.h>

int main() {
    int dept, roll;
    scanf("%d %d", &dept, &roll);

    printf("Your id is: %02d_%02d", dept, roll);

    return 0;
}