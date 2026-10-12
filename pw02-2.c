#include "stdio.h"
#include "stdbool.h"

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    bool flag1 = a;
    bool flag2 = b;

    printf("MODULE READY: %d\n", flag1);
    printf("FAULT STATE: %d\n", flag2);
    printf("BOOL SIZE: %zu\n", sizeof(bool));
    printf("FLAGS SUM: %d\n", flag1 + flag2);

    return 0;
}
