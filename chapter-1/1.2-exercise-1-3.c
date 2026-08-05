/* ↓ Modify the temperature conversion to print a heading above the table. */

#include <stdio.h>

int main() {
    float f, c;
    int upper, lower, step;

    lower = 0;
    upper = 300;
    step = 20;

    f = lower;

    printf("°F\t°C\n");
    while (f <= upper) {
        c = (5.0 / 9.0) * (f - 32.0);
        printf("%3.0f %6.1f\n", f, c);
        f = f + step;
    }
}