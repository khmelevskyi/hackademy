/*
 * =====================================================================================
 *
 *       Filename:  my_atoi.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/12/21 17:23:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

int my_atoi(const char *nptr)

{
    int result = 0;
    int sign = 1;

    if (*nptr == '-')

    {

        sign = -1;
        nptr++;

    }

    for (; *nptr >= '0' && *nptr <= '9'; nptr++)

    {

        result = result * 10 + (*nptr - '0');

    }

    return result * sign;

}
