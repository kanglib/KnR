#include <stdio.h>

#define LENGTH_MAX 22

main()
{
    int c, length, max;
    int nw[LENGTH_MAX + 2];
    int i, j;

    for (i = 1; i <= LENGTH_MAX + 1; i++)
        nw[i] = 0;

    length = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (length != 0) {
                if (length > LENGTH_MAX)
                    ++nw[LENGTH_MAX + 1];
                else
                    ++nw[length];
                length = 0;
            }
        } else
            ++length;
    }

    for (i = 1; i <= LENGTH_MAX + 1; i++) {
        if (i > LENGTH_MAX)
            printf(" + ");
        else
            printf("%2d ", i);
        for (j = 0; j < nw[i]; j++)
            putchar('#');
        putchar('\n');
    }
    putchar('\n');
    max = 0;
    for (i = 1; i <= LENGTH_MAX + 1; i++)
        if (nw[i] > max)
            max = nw[i];
    for (i = 0; i < max; i++) {
        for (j = 1; j <= LENGTH_MAX + 1; j++)
            if (i + nw[j] < max)
                printf("   ");
            else
                printf(" # ");
        putchar('\n');
    }
    for (i = 1; i < (LENGTH_MAX + 1) * 3; i++)
        putchar('-');
    putchar('\n');
    for (i = 1; i <= LENGTH_MAX; i++)
        printf("%2d ", i);
    printf(" + ");
    putchar('\n');
}
