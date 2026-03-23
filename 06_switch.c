#include <stdio.h>
#include <stdint.h>
void decode(uint16_t opcode) {
    printf("Opcode: 0x%04X\n", opcode);

    switch (opcode & 0xF000) {
        case 0x0000:
            printf("Instruction: clear screen o return\n");
            break;
        case 0x1000:
            printf("Instruction: jump to 0x%X\n", opcode & 0x0FFF);
            break;
        case 0x6000:
            printf("Instruction: set V%X = 0x%X\n",
                (opcode & 0x0F00) >> 8,
                (opcode & 0x00FF));
            break;
        default:
            printf("Instruction: unknown\n");
            break;
    }
    printf("---\n");
}

int main() {
    decode(0x00E0);
    decode(0x1234);
    decode(0x6A42);
    decode(0xABCD);

    return 0;
}