
#include <stdlib.h>

int len(char *str)
{
    int len = 0;
    while(str[len])
        len++;
    return (len);
}

char    *ft_strdup(char *src)
{
    char *new_string;
    
    new_string = malloc(len(src) + 1);
    int i = 0;
    while(src[i])
    {
        new_string[i] = src[i];
        i++;
    }
    new_string[i] = '\0';
    return(new_string);
}
