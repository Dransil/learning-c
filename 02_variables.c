#include <stdio.h>
#include <stdint.h>

// %u — prints an unsigned number (without a sign)
// %X — prints a hexadecimal number
// %d — prints an integer
// %.2f — prints a decimal number with 2 digits after the decimal point

int main()
{
    uint8_t reg = 255; // 8 bits, 0 to 255
    uint16_t opcode = 0xA4F2; // 16 bits, 0 to 65535
    int age = 20; // 32 bits
    float price = 9.99; // 4 bytes, numbers with dot

    printf("register:   %u\n", reg);
    printf("opcode: %X\n", opcode);
    printf("age:    %d\n", age);
    printf("price:  %.2f\n", price);
    return 0;
}