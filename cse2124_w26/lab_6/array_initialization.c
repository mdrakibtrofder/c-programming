#include <stdio.h>

int main() {
    /**
     * Array Initialization Example
     * Declares an array of size 5 for marks and initializes all values.
     **/
    int marks[5] = {85, 92, 78, 88, 95};
    int i;
    printf("Initialized marks in the array:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
    return 0;
}
