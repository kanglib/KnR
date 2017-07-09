#include <stdio.h>
#define MAXLINE 1000

int main(void)
{
    char line[MAXLINE];
    int flag;
    int c;
    int i;

    line[i = 0] = '\0';
    flag = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            line[i++] = c;
            line[i] = '\0';
        } else if (c == '\n') {
            if (flag) {
                putchar('\n');
                flag = 0;
            }
            line[i = 0] = '\0';
        } else {
            printf("%s%c", line, c);
            line[i = 0] = '\0';
            flag = 1;
        }
    }
    return 0;
}
