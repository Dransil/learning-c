#include <stdio.h>
#include <stdint.h>

int main() {
    // Create a test binary file
    FILE *write = fopen("test.bin", "wb");
    if (write == NULL) {
        printf("Error: could not create file\n");
        return 1;
    }

    uint8_t data[] = {0x12, 0x34, 0x56, 0x78, 0xAB, 0xCD};
    fwrite(data, 1, 6, write);
    fclose(write);

    // Read the file
    FILE *read = fopen("test.bin", "rb");
    if (read == NULL) {
        printf("Error: file not found\n");
        return 1;
    }

    uint8_t buffer[256];
    int bytes_read = fread(buffer, 1, 256, read);
    fclose(read);

    // Print results
    printf("Bytes read: %d\n", bytes_read);
    int i;
    for (i = 0; i < bytes_read; i++) {
        printf("buffer[%d] = 0x%02X\n", i, buffer[i]);
    }

    return 0;
}