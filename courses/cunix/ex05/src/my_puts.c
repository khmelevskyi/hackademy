/*
 * =====================================================================================
 *
 *       Filename:  my_puts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/12/21 18:47:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <unistd.h>
#include <stdio.h>

int my_puts(const char *s)

{
    while (*s)

    {
        if (write(1, s++, 1) == EOF)
        {

            return EOF;
        }
    }

    if (write(1, "\n", 1) == EOF)
    {

        return EOF;

    }

    return 1;
}
