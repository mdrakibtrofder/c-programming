/**
Write a C program to take length and width of two rectangles, calculate their areas, and print the difference
**/
#include <stdio.h>
int main() {
    double l1, w1, l2, w2, area1, area2, diff;

    printf("Enter length and width of rectangle 1: ");
    scanf("%lf %lf", &l1, &w1);

    printf("Enter length and width of rectangle 2: ");
    scanf("%lf %lf", &l2, &w2);

    area1 = l1 * w1;
    area2 = l2 * w2;
    diff = area1 - area2;

    printf("The difference between the areas is %.2lf\n", diff);
    return 0;
}