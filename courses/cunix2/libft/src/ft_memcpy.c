#include "../libft.h"

// The  memcpy()  function  copies  n  bytes from memory area src to memory area dest.
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *dchr = (char *) dest;
    char *schr = (char *) src;

    while (n-- > 0)
    {
        *(dchr++) = *(schr++);
    }

    return dest;
}
