#include <stdio.h>

int ft_len(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}
char *ft_strrev(char *str)
{
    int leng = ft_len(str);
    int i = 0;
    char tmp;
    while(leng > i)
    {
        tmp = str[i];
        str[i] = str[leng - 1];
        str[leng - 1] = tmp;
        leng --;
        i++;
    }
    return str;
}

