#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int STATE = OUT;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            STATE = OUT;
        }
        else
        {
            if (STATE == OUT)
            {
                STATE = IN;
                putchar('\n');
            }
            putchar(c);
        }
    }

    return 0;
}