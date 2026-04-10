#include <stdio.h>

int main()
{
    int n_blanks, n_tabs, n_newlines;
    n_blanks = n_tabs = n_newlines = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            n_blanks++;
        }
        else if (c == '\t')
        {
            n_tabs++;
        }
        else if (c == '\n')
        {
            n_newlines++;
        }
    }
    printf("\nBlanks: %d", n_blanks);
    printf("\nTabs: %d", n_tabs);
    printf("\nNewlines: %d", n_newlines);
    return 0;
}