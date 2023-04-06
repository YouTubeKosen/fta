#include <stdio.h>
#include <stdint.h>

#define ADD(a,b) a+b

int main(void) {
    uint32_t result;

    result = ADD(1, 2);
    printf("1 + 2 = %d\n", result);

    result = ADD(1, 2) * 3;
    printf("(1 + 2) * 3 = %d\n", result);
    return 0;
}