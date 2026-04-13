#include <stdio.h>

int main() {
    /**
     * Program to calculate the average of numbers from 1 to N.
     **/
    int n, sum = 0;
    int i;
    float average;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    average = (float)sum / n;

    printf("Average of numbers from 1 to %d is: %.2f\n", n, average);

    return 0;
}
