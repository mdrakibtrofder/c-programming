#include <stdio.h>

enum Shape { CIRCLE, RECTANGLE };

union Dimension {
    float radius;
    struct { float width, height; } rect;
};

int main() {
    enum Shape s = CIRCLE;
    union Dimension d;
    d.radius = 5.0;
    if (s == CIRCLE)
        printf("Circle radius: %.1f\n", d.radius);
    return 0;
}