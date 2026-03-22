#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t memory[4096];
    uint8_t V[16];
    uint16_t opcode;
    uint16_t pc;
    uint16_t stack[16];
    uint8_t sp;
} Chip8;

// Initialize the chip8
void chip8_init(Chip8 *cpu){
    cpu->pc = 0x200;
    cpu->opcode =0x0000;
    cpu->sp = 0;
    int i;
    for (i = 0; i < 16; i++)
    {
        cpu->V[i] = 0;
        cpu->stack[i] = 0;
    }
    for (i = 0; i < 4096; i++)
    {
        cpu->memory[i]=0;
    }
}

// Print chip8 status
void chip8_print(Chip8 *cpu){
    printf("PC:     0x%X\n", cpu->pc);
    printf("Opcode: 0x%X\n", cpu->opcode);
    printf("SP:     %u\n",   cpu->sp);
    printf("V[0]:   %u\n",   cpu->V[0]);
}

int main(){
    Chip8 cpu;
    chip8_init(&cpu);
    chip8_print(&cpu);
    return 0;
}