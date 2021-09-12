/*
 * =====================================================================================
 *
 *       Filename:  my_strcmp.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/12/21 16:42:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

int my_strcmp(char *str1, char *str2)

{

    while (*str1 != '\0')

    {

        if (*str2 == '\0' || *str1 > *str2)

        {

            return 1;

        }

        if (*str1 < *str2)

        {

            return -1;

        }

        str1++;
        str2++;

    }

    if (*str2 != '\0')

    {

        return -1;

    }

    return 0;

}



