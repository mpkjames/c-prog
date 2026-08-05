// Run the "hello, world" program on your system. Experiment with leaving out
// parts of the program to see what error messages you get.

#include <stdio.h>
// Leaving out this part of the program generates a call to undeclared library 
// function 'printf' error

int main() {
// Leaving out this part of the program generates a error: expected parameter 
// declarator error

    printf("hello, world\n");
    // Leaving out this part of the program does not generate an error but the
    // program does not do anything.
}