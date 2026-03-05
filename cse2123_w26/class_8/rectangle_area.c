/**
Write a C program to take length and width and calculate rectangle area
**/
#include <stdio.h>

int main() {
    double length, width;
    scanf("%lf %lf", &length, &width);

    double area = length * width;

    printf("Area = %.2lf", area);

    return 0;
}