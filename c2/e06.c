#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned m;

    m = ~(~0 << n) << (p - n + 1);
    return (x & ~m) | (y & m);
}

int main(void)
{
    printf("%x\n", setbits(0xaa, 4, 3, 0x166));
    return 0;
}
