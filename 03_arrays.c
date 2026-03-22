#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t memory[16];
    int i;
    // Fill the memory with values
    for (i = 0; i < 16; i++)
    {
        memory[i]=i*10;
    }
    // Print each position
    for (i = 0; i < 16; i++)
    {
        // %2d and %3u automatically align the numbers
        printf("memory[%2d] = %3u\n", i, memory[i]);
    }
    return 0;
}