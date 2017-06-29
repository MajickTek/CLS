#include <stdio.h>

void vt100_clear() {
    printf("\033[2J");
}

int main() {
   vt100_clear();
}