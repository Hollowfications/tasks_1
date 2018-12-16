#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long int finding(char const *p_str, char p_symb)
{
        long int count = 0;
        char *p = p_str;
        while(*p != '\0')
        {
                if (*p == p_symb)
                {
                        count++;
                }
                p++;
        }
        return count;
}

long int searching( char const *p_str, char p_symb)
{
        long int count = 0;
        char  *p = strchr(p_str, (int)(p_symb));
        while (p!= NULL)
        {
                count++;
                p++;
                p = strchr(p, (int)(p_symb));
        }
        return count;
}

int main()
{
        char *str = malloc(256);
        char symb;
        printf("input string:\n");
        gets(str);
        printf("input symbol:\n");
        symb = getchar();
        printf("result finding: %ld\n", finding(str, symb));
        printf("result searching: %ld\n", searching(str, symb));
}
