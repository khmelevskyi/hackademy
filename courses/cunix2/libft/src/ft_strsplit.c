#include "../libft.h"

/*
Allocates (with malloc(3)) and returns an array of"fresh" strings 
    (all ending with'\0', including the array itself) obtained by spliting s using 
        the character c as a delimiter. If the allocation fails the function returns NULL. 
            Example: ft_strsplit("*hello*fellow***students*",'*') returns the array ["hello","fellow","students"].
*/
char **ft_strsplit(char const *s, char c)
{
    int s_len = 0;
    int ii = 0;
    int items = 0;
    long start = 0;

    for (; s[s_len]; s_len++);

    while (ii < s_len)
    {
        if (start && s[ii] == c)
        {
            start = 0;
            items++;
        }
        else if (s[ii] != c)
        {
            start = 1;
        }

        ii++;
    }

    if (start)
    {
        items++;
    }

    char **new_str = (char **)malloc(sizeof(char *) * (items + 1));
    new_str[items] = NULL;

    ii = 0;
    int str_len = 0;
    items = 0;
    start = -1;

    while (ii < s_len)
    {
        if (start == -1)
        {
            if (s[ii] != c)
            {
                start = ii;
                str_len++;
            }
        }
        else
        {
            if (s[ii] == c)
            {
                new_str[items] = (char *)malloc(sizeof(char) * (str_len + 1));
                new_str[items][str_len] = 0;
                ft_memcpy(new_str[items], &s[start], str_len);
                start = -1;
                str_len = 0;
                items++;
            }
            else
            {
                str_len++;
            }
        }

        ii++;
    }

    if (start != -1)
    {
        new_str[items] = (char *)malloc(sizeof(char) * (str_len + 1));
        new_str[items][str_len] = 0;
        ft_memcpy(new_str[items], &s[start], str_len);
    }

    return new_str;
}