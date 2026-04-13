#include <stdio.h>

int main() {
    /**
     * Program to calculate the factorial of each array element.
     * Takes array size and elements as input.
     **/
    int size, i, j;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nFactorials of elements:\n");
    for (i = 0; i < size; i++) {
        long long factorial = 1;
        for (j = 1; j <= arr[i]; j++) {
            factorial *= (long long)j;
        }
        printf("Factorial of %d is: %lld\n", arr[i], factorial);
    }

    return 0;
}
