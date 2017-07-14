#include <ctype.h>
#include <stdio.h>

int lower(int c)
{
    return c + (isupper(c) ? ('a' - 'A') : 0);
}

int main(void)
{
    char s[] = "Hello, World\n";
    int i;

    for (i = 0; s[i]; i++)
        s[i] = lower(s[i]);
    printf("%s", s);
    return 0;
}
