#include "../libft.h"

// The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *t = s;
    
    while (n-- > 0)
    {
        *t++ = (unsigned char) c;
    }
    
    return s;
}