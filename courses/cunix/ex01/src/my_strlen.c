/*
 * =====================================================================================
 *
 *       Filename:  my_strlen.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/12/21 12:50:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

unsigned int my_strlen(char *str)

{

    unsigned int strlen = 0;

    while (*str++ != '\0')

    {

        strlen++;

    }

    return strlen;

}
