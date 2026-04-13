#include <stdio.h>

int main() {
    /**
     * Program to calculate the factorial of number N.
     **/
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= (long long)i;
    }

    printf("Factorial of %d is: %lld\n", n, factorial);

    return 0;
}
