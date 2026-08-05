#include <stdio.h>

/* print Fahrenheit-Celcius table 
    for fahr = 0, 20, ..., 300; floaing-point version */

int main() {
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        /* ↑ Explicitly typing 5.0 and 9.0 instead of 5 and 9 ensures that
            the decimal part of the result is retained during division 
            (0.55...). Left as integers, 5/9 would truncate (and nor round) the
            decimal, and so would always evaluate to 0. */
        printf("%3.0f %6.1f\n", fahr, celcius);
        /* ↑ %f means substitute in my listed float variable (used more than 
            once, then in the order they are listed).
            %.1f means only print one digit after the decimal. 
            %6 means print the variable 6 characters wide and right align (this
            can be used with other data types as well).
            %6.1f chains all of these together. */
        fahr = fahr + step;
    }
}