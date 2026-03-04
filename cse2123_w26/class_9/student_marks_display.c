/**
Write a C program to take a student’s roll number, marks in Mathematics, and marks in Science as input and print:
Roll number X scored Y in Mathematics and Z in Science.
**/
#include <stdio.h>
int main() {
    int roll, math, sci;
    printf("Enter roll number, Math marks, Science marks: ");
    scanf("%d %d %d", &roll, &math, &sci);

    printf("Roll number %d scored %d in Mathematics and %d in Science.\n", roll, math, sci);
    return 0;
}