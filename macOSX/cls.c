/*
 * This version is more efficient on Apple macOS/X systems.
 */

#include <stdio.h>

void vt100_clear() { // Simple function to use a VT-100 "clear entire screen" escape sequence, also known as "˄[[2J".
    printf("\33c\e[3J");
    /*
    * This works the same way as before, but use macOS-specific commands.
    * On macOS, the UNIX version (../cls.c) cleas the screen, but leaves the prompt at the bottom of the terminal.
    * 
    * Got from: https://stackoverflow.com/questions/2198377/how-to-clear-previous-output-in-terminal-in-mac-os-x
    */
}

int main() {
   vt100_clear(); // simple usage of function.
}
