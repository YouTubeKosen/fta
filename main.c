#include <stdio.h>
#include <stdint.h>
#define ADD(a,b) a+b

int main(void) {
    uint32_t a = 1, b = 2, c =3;
    printf("%d+%d=%d\n", a, b, ADD(a, b));
    printf("(%d+%d)*%d=%d\n", a, b, c, ADD(1,2) * 3);
    return 0;
}