/*
 * Verify that the expression getchar() != EOF is 0 or 1
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
        printf("EOF %d\n", c != EOF);
    }

}
