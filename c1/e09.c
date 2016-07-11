#include <stdio.h>

main()
{
    int c, prev;

    prev = EOF;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            prev = c;
            continue;
        }
        if (prev == ' ')
            putchar(' ');
        putchar(c);
        prev = c;
    }
}
