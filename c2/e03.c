#include <ctype.h>
#include <stdio.h>

int htoi(char s[])
{
    int i, n;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;
    else
        i = 0;
    n = 0;
    while (1) {
        if (isdigit(s[i]))
            n = n * 16 + (s[i] - '0');
        else if (s[i] >= 'a' && s[i] <= 'f')
            n = n * 16 + (s[i] - 'a' + 10);
        else if (s[i] >= 'A' && s[i] <= 'F')
            n = n * 16 + (s[i] - 'A' + 10);
        else
            break;
        i++;
    }
    return n;
}

int main(void)
{
    printf("%d\n", htoi("ff"));
    printf("%d\n", htoi("FF"));
    printf("%d\n", htoi("0xff"));
    printf("%d\n", htoi("0XFF"));
    printf("%d\n", htoi("11141720"));
    printf("%d\n", htoi("0X11141720"));
}
