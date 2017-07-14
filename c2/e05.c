#include <stdio.h>

int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i]; i++)
        for (j = 0; s2[j]; j++)
            if (s1[i] == s2[j])
                return i;
    return -1;
}

int main(void)
{
    char s[] = "hello, world\n";
    printf("%d\n", any(s, "flag"));
    printf("%d\n", any(s, "mz"));
    return 0;
}
