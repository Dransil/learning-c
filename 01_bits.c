#include <stdio.h>

int main() {
    int opcode = 0xA4F2;
    int nibble1 = (opcode & 0xF000) >>12;
    int nibble2 = (opcode & 0x0F00) >>8;
    int nibble3 = (opcode & 0x00F0) >>4;
    int nibble4 = (opcode & 0x000F);
    // "%X" print decimal
    printf("nibble1: %X\n", nibble1);
    printf("nibble2: %X\n", nibble2);
    printf("nibble3: %X\n", nibble3);
    printf("nibble4: %X\n", nibble4);
    return 0;
}