#include <stdio.h>

int bitcount(unsigned x)
{
    int b;

    for (b = 0; x; b++)
        x &= (x-1);
    return b;
}

int main(void)
{
    printf("%d\n", bitcount(0xff));
    printf("%d\n", bitcount(0x11141720));
    printf("%d\n", bitcount(0x414243));
    return 0;
}
