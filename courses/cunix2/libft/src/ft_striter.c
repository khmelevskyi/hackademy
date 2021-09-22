#include "../libft.h"

// applies the function f to each character of the string passed as argument
void ft_striter(char *s, void (*f)(char *))
{
    for (int ii = 0; s[ii] != '\0'; ii++)
    {
        f(&s[ii]);
    }
}