#include <stdio.h>

int htoi(char s[]);

int htoi(char s[])
{
    int i, n, hexdigit;
    i = n = 0;
    if (s[i] == '0')
    {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
        {
            ++i;
        }
    }

    for (; s[i] != '\0'; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            hexdigit = s[i] - '0';
        }
        else if (s[i] >= 'a' || s[i] <= 'f')
        {
            hexdigit = s[i] - 'a' + 10;
        }
        else if (s[i] >= 'A' || s[i] <= 'F')
        {
            hexdigit = s[i] - 'A' + 10;
        }
        else
            break;
        n = n * 16 + hexdigit;
    }
    return n;
}

int main()
{
    printf("0xff = %d\n", htoi("0xff"));
    printf("0X123a = %d", htoi("0X123a"));

    return 0;
}