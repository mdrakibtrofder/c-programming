#include <stdio.h>

int main() {
    /**
     * Program to calculate the average of array elements.
     * Takes array size and elements as input.
     **/
    int size, i;
    float sum = 0, average;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / size;

    printf("Average of array elements: %.2f\n", average);

    return 0;
}
