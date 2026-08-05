// Experiment to find out what happens when printf's argument string contains
// \c, where c is not n, t, b, ", or \.

#include <stdio.h>

int main() {
    printf("hello\d, world\n");
    // If the escape sequence does not exist you get a warning: unknown escape 
    // sequence when trying to compile.
}