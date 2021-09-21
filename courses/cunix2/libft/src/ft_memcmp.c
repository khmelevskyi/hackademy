#include "../libft.h"

// The  memcmp()  function  compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *t_s1 = (unsigned char *) s1;
    unsigned char *t_s2 = (unsigned char *) s2;
    if (s1 == s2 || n == 0)
    {
        return 0;
    }
    while (n-- > 0)
    {
        if (*t_s1 != *t_s2)
        {
            return (*t_s1 > *t_s2) ? 1 : -1;
        }
        t_s1++;
        t_s2++;
    }
    return 0;
}