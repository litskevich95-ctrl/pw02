#include "stdio.h"
#include "stdint.h"
int main(void) {
    unsigned int temp;
    scanf("%u", &temp);
    uint8_t val = (uint8_t)temp;
    uint8_t add = val + 10;
    uint8_t mul = val * 2;
    uint8_t sqr = val * val;
    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul);
    printf("SQR: %u\n", (unsigned int)sqr);
    return 0;
}
