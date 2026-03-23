#include <stdio.h>
#include <stdint.h>

void duplicate(int *n){
    *n = *n * 2;
}

int main(){
    int number = 5;
    int *p = &number;
    printf("Initial value:     %d\n", number);
    printf("Direction:         %p\n", p);
    printf("Pointer value:     %d\n", *p);

    duplicate(&number);
    printf("After duplicating: %d\n", number);

    return 0;
}