#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    int i, j, k, flag;
    k = 0;
    for (i = 0; s1[i] != '\0'; ++i)
    {
        flag = 0;
        for (j = 0; s2[j] != '\0'; ++j)
        {
            if (s1[i] == s2[j])
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            s1[k++] = s1[i];
        }
        else
            continue;
    }
    s1[k] = '\0';
}

void squeeze1(char str1[], char str2[])
{
    int i;
    int j;
    int k;
    for (k = 0; str2[k] != '\0'; ++k)
    {
        for (i = j = 0; str1[i] != '\0'; ++i)
        {
            if (str1[i] != str2[k])
            {
                str1[j++] = str1[i];
            }
        }

        str1[j] = '\0';
    }
}

int main()
{
    char s1[10] = "hello";
    char s2[10] = "lh";
    printf("s1 = hello, s2 = lh\n");
    squeeze(s1, s2);
    printf("s1 = %s", s1);
    return 0;
}