#include "../libft.h"

/*
The  strnstr()  function finds the first occurrence of the substring needle in the string haystack, where not more than len characters
     are searched. The terminating null bytes ('\0') are not compared.
*/
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (*needle == '\0' || !*needle)
    {
        return (char *) haystack;
    }
    
    for (size_t ii = 0; haystack[ii] != 0 && ii < len; ii++)
    {
        for (size_t jj = 0; needle[jj] != 0 && ii + jj < len; jj++)
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