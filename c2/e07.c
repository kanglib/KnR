#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
    unsigned m;

    m = ~(~0 << n) << (p - n + 1);
    return x ^ m;
}

int main(void)
{
    printf("%x\n", invert(0xaa, 4, 3));
    return 0;
}
