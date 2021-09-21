#include "../libft.h"

// The  abs()  function computes the absolute value of the integer argument j.
int ft_abs(int j)
{
    if (j < 0)
    {
        return -j;
    }
    return j;
}