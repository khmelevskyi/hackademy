#include "../libft.h"

/*
The  strstr()  function finds the first occurrence of the substring needle in the string haystack.  The termi‐
       nating null bytes ('\0') are not compared.
*/
char *ft_strstr(const char *haystack, const char *needle)
{
    if (*needle == '\0' || !*needle)
    {
        return (char *) haystack;
    }
    
    for (int ii = 0; haystack[ii] != 0; ii++)
    {
        for (int jj = 0; needle[jj] != 0; jj++)
        {
            if (haystack[ii + jj] != needle[jj])
            {
                break;
            }
            if (needle[jj + 1] == 0)
            {
                return (char *) &haystack[ii];
            }
        }
    }
    return NULL;
}
