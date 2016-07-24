#include <stdio.h>

main()
{
    int c;
    int nc[96];
    int i, j;

    for (i = 0; i < 96; i++)
        nc[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c < 32 || c > 126)
            ++nc[95];
        else
            ++nc[c - 32];
    }

    for (i = 0; i < 96; i++) {
        if (i == 95)
            printf(". | ");
        else
            printf("%c | ", i + 32);
        for (j = 0; j < nc[i]; j++)
            putchar('#');
        putchar('\n');
    }
}
