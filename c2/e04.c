#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    for (i = j = 0; s1[i]; i++) {
        s1[j++] = s1[i];
        for (k = 0; s2[k]; k++) {
            if (s1[i] == s2[k]) {
                j--;
                break;
            }
        }
    }
    s1[j] = '\0';
}

int main(void)
{
    char s[] = "hello, world\n";
    squeeze(s, "elf");
    printf("%s", s);
    return 0;
}
