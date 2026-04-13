/**
Write a C program to check whether a number is divisible by 5
**/
#include <stdio.h>
int main() {
  

    int nums[10] = {0};

    int i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Print the whole array: ");
    for(i = 0; i < 10; i++) {
        printf("%d *", nums[i]);
    }

    return 0;
}