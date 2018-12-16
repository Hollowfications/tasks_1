#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char str[256];
    char res[256];

    printf("enter string: ");
    gets(str);

    int j = 0;
    int i;
    for (i = 0; i < strlen(str) ; i++)
    {
        if (str[i] == ' ')
        {
          if (j == 0)
            continue;
          if (str[i+1] == ' ')
            continue;
        }
        res[j] = str[i];
        j++;
    }
    i = strlen(res);
    if(res[i-1] == ' ')
        res[i-1] = '\0';

    printf("\nnew string: %s", res);
}
