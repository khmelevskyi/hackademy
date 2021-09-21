#include "../libft.h"

/*
The div() function computes the value numerator/denominator and returns the quotient and remainder in a struc‐
       ture named div_t that contains two integer members (in unspecified order) named quot and rem.  The quotient is
       rounded toward zero.  The result satisfies quot*denominator+rem = numerator.
*/
div_t ft_div(int numerator, int denominator)
{
    div_t res;
    int quot, rem;
    quot = numerator / denominator;
    rem = numerator % denominator;
    res.quot = quot;
    res.rem = rem;
    return res;
}