/*
 * =====================================================================================
 *
 *       Filename:  my_strcpy.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/12/21 17:03:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

char *my_strcpy(char *dest, const char *src)

{

    char *new_dest = dest;

    while (*src != '\0')

    {

        *dest = *src;
        dest++;
        src++;

    }

    *dest = '\0';

    return new_dest;

}

