# c-prog

Examples and exercises for C Programming textbook

## Program compilation

Compiling a C program on a moderm macOS device differs slightly from what is outlined in the textbook. Use the terminal command: `gcc -o output_filename input_filename.c`. To run the program: `./output_filename`.

## Chapter 1 notes

### Integer division

(1.2) In C, division using integers will _truncate_ (and not round) digits after the decimal. For example, 5/9 = 0.55... would become 0. To avoid this integer literals can be written 5.0/9.0 to convert them into floats and retain the decimal part.

### `printf` modifiers

(1.2) In the statement `printf("%d\t%d\n", fahr, cels);` the `printf` function will subsitute the `%d` for an integer value listed as a subsequent parameter. If there is more than one used, it will print these parameters in the order they are listed.

`%d` can be substituted for `%f` for float, `%x` for hexadecimal, `%c` for character, and `%s` for string.

Modifiers can also be included with the **format specifier** to set things like a character width (ex., `%6d` prints the integer 6 characters wide) and the numeber of decimal places (ex., `%.2f` print only 2 places after the decimal). Modifiers can be combined (ex., `%4.1f` is 4 characters wide and 1 decimal place).
