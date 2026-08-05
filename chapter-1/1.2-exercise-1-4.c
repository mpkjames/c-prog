/* ↓ 1-4: Write a program to print the corresponding Celcius to Fahrenheit
    table. */

#include <stdio.h>

int main() {
    float f, c;
    int upper, lower, step;

    lower = 0;
    upper = 300;
    step = 20;

    c = lower;

    printf("°C\t°F\n");
    while (c <= upper) {
        /* ↓ The standard f to c forumula is c = (5 / 9) * (f - 32). This can
            be rearranged to c * (9 / 5) = f - 32, which becomes
            c * (9 / 5) + 32 = f. */
        f = c * (9.0 / 5.0) + 32.0; 
        printf("%3.0f %6.1f\n", c, f);
        c = c + step;
    }
}