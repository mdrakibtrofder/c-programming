#include <stdio.h>

int main() {
    /**
     * Program to calculate the sum of array elements.
     * Takes array size and elements as input.
     **/
    int size, i, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
