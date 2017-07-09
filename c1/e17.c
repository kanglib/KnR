#include <stdio.h>

int main(void)
{
    char line[80];
    int c;
    int i;

    i = 0;
    while ((c = getchar()) != EOF) {
        if (i < 80) {
            line[i++] = c;
        } else if (i == 80) {
            printf("%s%c", line, c);
            i++;
        } else {
            putchar(c);
        }
        if (c == '\n')
            i = 0;
    }
    return 0;
}
