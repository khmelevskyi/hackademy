#include "../libft.h"

/* allocates (with malloc(3)) and returns a "fresh" string ending with '\0', 
    result of the concatenation of s1 and s2. If allocation fails the function returns NULL
*/
char *ft_strjoin(char const *s1, char const *s2)
{

    size_t s1_len = 0;
    size_t s2_len = 0;
    for (; s1[s1_len]; s1_len++);
    for (; s2[s2_len]; s2_len++);

    size_t conc_len = s1_len + s2_len;

    char *conc = (char *) malloc(conc_len + 1);
    if (!conc)
    {
        return NULL;
    }
    
    int end_pos = 0;
    for (size_t ii = 0; ii < s1_len; ii++)	    
    {
        conc[end_pos++] = s1[ii];
    }
    for (size_t ii = 0; ii < s2_len; ii++)
    {
        conc[end_pos++] = s2[ii];
    }
    conc[end_pos] = '\0';

    return conc;

}