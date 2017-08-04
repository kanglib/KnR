#include <stdio.h>

void escape(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[j] != '\0'; j++) {
        switch (t[j]) {
        case '\n':
            s[i++] = '\\';
            s[i++] = 'n';
            break;
        case '\t':
            s[i++] = '\\';
            s[i++] = 't';
            break;
        default:
            s[i++] = t[j];
            break;
        }
    }
    s[i] = '\0';
}

void unescape(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[j] != '\0'; j++) {
        if (t[j] == '\\') {
            switch (t[++j]) {
            case 'n':
                s[i++] = '\n';
                break;
            case 't':
                s[i++] = '\t';
                break;
            default:
                s[i++] = '\\';
                s[i++] = t[j];
                break;
            }
        } else {
            s[i++] = t[j];
        }
    }
    s[i] = '\0';
}

int main(void)
{
    char s[20] = "hello,\tworld\n\t\n";
    char t[20];

    printf("%s$\n", s);
    escape(t, s);
    printf("%s$\n", t);
    unescape(s, t);
    printf("%s$\n", s);
    return 0;
}
