#include <stdio.h>

int main() {
    /**
     * Array Value Assignment Example
     * Declares a double array of size 7 for daily temperatures and manually assigns values.
     **/
    double days[10];

    // Manually adding temperature values for 7 days
    days[0] = 30.5;
    days[1] = 31.2;
    days[2] = 29.8;
    days[3] = 32.0;
    days[4] = 31.5;
    days[5] = 30.0;
    days[6] = 28.5;
    days[7] = 29.0;
    days[8] = 30.0;
    days[9] = 31.0;

    int i;
    printf("Daily temperature records (Double type):\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d temperature: %.2f\n", i + 1, days[i]);
    }

    return 0;
}
