#include <stdio.h>

unsigned rightrot(unsigned x, int n)
{
    int b;

    for (; n > 0; n--) {
        b = x & 1;
        x >>= 1;
        if (b)
            x |= ~(~0U >> 1);
    }
    return x;
}

int main(void)
{
    printf("%x\n", rightrot(0xaa, 4));
    return 0;
}
