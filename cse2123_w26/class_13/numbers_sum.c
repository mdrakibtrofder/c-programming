#include <stdio.h>

int main() {
    /**
     * Program to calculate the sum of numbers from 1 to N.
     **/
    int n, sum = 0;
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum from 1 to %d is: %d\n", n, sum);

    return 0;
}
