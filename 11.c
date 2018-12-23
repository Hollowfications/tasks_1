#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

int compare(char* str1, char* str2)
{
    int flag = 0, count = 0;
    do
    {
        if (str1[count] < str2[count])
            flag=1;

        if (str1[count] > str2[count])
            flag=2;

        if (str1[count] == '\0')
            flag=1;
        count++;
    } while (!flag);
    return flag;
};

void sort(char **array, size_t count)
{
    char *tmp;
    for (int j = 0; j < count; j++)
    {
        for (int i = 0; i < count - 1; i++)
        {
            if (compare(array[i], array[i + 1])==2)
            {
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
            };
        };
    };
};


int main(int argc, char** argv[])
{
    int i, n;
    char **text;
    char str[256];
    printf("enter number of strings: ");
    scanf("%d",&n);
    text = malloc(n*sizeof(char*));
    for (i = 0; i < n; i++)
    {
        printf("enter string %d: ", i+1);
        scanf("%s", &str);
        text[i] = malloc((strlen(str))*sizeof(char*));
        strcpy(text[i],str);
    }

    sort(text, n);
    for (i = 0; i < n; i++)
    {
        printf("string %d: %s\n", i+1, text[i]);
    }

}
