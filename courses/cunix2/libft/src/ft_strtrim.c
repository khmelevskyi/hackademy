#include "../libft.h"

/*
Allocates (with malloc(3)) and returns a copy of the string given as argument 
    without whitespaces at the beginning or at the end of the string. 
        Will be considered as whitespaces the following characters'','\n' and'\t'. 
            If s has no whitespaces at the beginning or at the end, the function returns a copy of s. 
                If the allocation fails the function returns NULL.
*/
char *ft_strtrim(char const *s)
{
    int s_len = 0;
    for (; s[s_len]; s_len++);

    if (s == NULL)
    {
        return (NULL);
    }

    while (s[s_len - 1] == ' ' || s[s_len - 1] == '\t' || s[s_len - 1] == '\n')
    {
        s_len--;
    }

    int nn = -1;
    while (s[++nn] == ' ' || s[nn] == '\t' || s[nn] == '\n')
    {
        s_len--;
    }
    if (s_len <= 0)
    {
        s_len = 0;
    }

    char *res = (char *)malloc(s_len + 1);
    if (res == NULL)
    {
        return (NULL);
    }

    s = s + nn;
    int ii = -1;
    while (++ii < s_len)
    {
        res[ii] = *s++;
    }

    res[ii] = '\0';
    return res;

}