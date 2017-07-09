#include <stdio.h>
#define MAXLINE 1000

void reverse(char s[]);

int main(void)
{
    char line[MAXLINE];
    int c;
    int i;

    i = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line[i] = '\0';
            reverse(line);
            printf("%s\n", line);
            i = 0;
        } else {
            line[i++] = c;
        }
    }
    return 0;
}

void reverse(char s[])
{
    char temp;
    int i, j;

    if (!s[0])
        return;
    i = j = 0;
    while (s[j])
        j++;
    j--;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
