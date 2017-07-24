#include <stdio.h>

void vt100_clear() { // Simple function to use a VT-100 "clear entire screen" escape sequence, also known as "˄[[2J".
    printf("\033[2J\n");
    /*
    * The backslash is programming escape, the 033 is octal escape, and the "[2J" is the
    * VT-100 escape sequence itself.
    * An escape "033[2J" needs to be escaped "\" to work!
    * The "\n" is the standard escape code for "newline"
    */
}

int main() {
   vt100_clear(); // simple usage of function.
}
