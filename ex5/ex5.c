#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int STATE = OUT;
    int c;
    int n_words = 0;
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
                n_words++;
            }
        }
    }
    printf("\nnumber of words: %d", n_words);

    return 0;
}