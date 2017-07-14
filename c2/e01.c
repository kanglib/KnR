#include <limits.h>
#include <stdio.h>

int main(void)
{
    unsigned char schar_max;
    unsigned short shrt_max;
    unsigned int int_max;
    unsigned long long_max;

    puts("Standard headers:");
    printf("  signed char:\t%d - %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char:\t%u - %u\n", 0, UCHAR_MAX);
    printf("  signed short:\t%d - %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short:\t%u - %u\n", 0, USHRT_MAX);
    printf("  signed int:\t%d - %d\n", INT_MIN, INT_MAX);
    printf("unsigned int:\t%u - %u\n", 0, UINT_MAX);
    printf("  signed long:\t%ld - %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long:\t%lu - %lu\n", 0L, ULONG_MAX);
    putchar('\n');

    puts("Direct computation:");
    schar_max = (unsigned char) ~0 >> 1;
    shrt_max = (unsigned short) ~0 >> 1;
    int_max = ~0U >> 1;
    long_max = ~0UL >> 1;
    printf("  signed char:\t%d - %d\n", (char) (schar_max + 1), schar_max);
    printf("unsigned char:\t%u - %u\n", 0, (unsigned char) ~0);
    printf("  signed short:\t%d - %d\n", (short) (shrt_max + 1), shrt_max);
    printf("unsigned short:\t%u - %u\n", 0, (unsigned short) ~0);
    printf("  signed int:\t%d - %d\n", int_max + 1, int_max);
    printf("unsigned int:\t%u - %u\n", 0, ~0U);
    printf("  signed long:\t%ld - %ld\n", long_max + 1, long_max);
    printf("unsigned long:\t%lu - %lu\n", 0L, ~0UL);
    return 0;
}
