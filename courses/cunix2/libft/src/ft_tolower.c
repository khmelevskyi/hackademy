#include "../libft.h"

// converts uppercase letters to lowercase
int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}