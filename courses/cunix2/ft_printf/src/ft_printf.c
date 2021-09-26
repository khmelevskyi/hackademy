// not finished
#include<stdio.h> 
#include<stdarg.h>                      

void ft_printf(char *, ...);


void ft_printf(char *format, ...) 
{ 
    char *s; 
    va_list arg; 
    va_start(arg, format); 

    for (s = format; *s != '\0'; s++) 
    { 
        while (*s != '%') 
        { 
            putchar(*s);
            s++; 
        } 

        s++;
    }
}