/**
Write a C program to determine if a number is positive or negative
**/
#include <stdio.h>

int main() {
   double num;
   scanf("%lf", &num);

   if(num >= 0) {
       printf("Positive");
   } else {
       printf("Negative");
   }

   return 0;
}