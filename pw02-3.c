#include "stdio.h"
int main(void) {
    int dec = 10, oct = 010, hex = 0x10;
    printf("DEC 10: %d\n", dec);
    printf("OCT 10: %d\n", oct);
    printf("HEX 10: %d\n", hex);
    printf("INT SUFFIX: %zu %zu %zu %zu\n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT EQ: %d\n", 0.1f == 0.1);
    char ch = 'A';
    printf("CHAR FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR LIT VAR STR: %zu %zu %zu\n", sizeof('A'), sizeof(ch), sizeof("A"));
    return 0;
}
