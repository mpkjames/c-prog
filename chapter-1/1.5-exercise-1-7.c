/*
 * Write a program to print the value of EOF.
 */

#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            printf("%c %d\n", c, c != EOF);
        }
    }
    if (c == EOF) {
        printf("%d %d\n", c, c != EOF);
    }

}
