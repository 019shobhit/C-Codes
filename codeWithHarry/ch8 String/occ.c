#include <stdio.h>

int main()
{
    char c[] = "shobhot chauhan";
    int x[26] = {0};
    for (int i = 0; c[i] != '\0'; i++)
    {
        int a = c[i] - 97;
        x[a]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c \t %d \n", 97 + i, x[i]);
    }
    return 0;
}