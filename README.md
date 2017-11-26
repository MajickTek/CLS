# CLS
Implementation of CLS for UNIX/macOS

This is a very simple implementation of the DOS/Windows command "cls" for non-windows Operating Systems (although it will work with Windows CMD as well).
The implementation is done with the manual usage of VT-100 terminal escape codes. Namely, the code "˄[[2J". "˄[" is the hardware (or emulated) escape code for the sequences. "[2J" simply means "clear entire screen". There is a big comment in the code explaining this.

Search Google for "VT-100 escape sequences" and you will find big tables of them. To use them in any programming language, it is simple: You use "\033" as the escape sequence instead of "˄[".

BASH example: printf '\033[2J'
C example: printf("\033[2J");

These codes can be used to change colors, use font formatting, change the cursor style/location, and much more!
