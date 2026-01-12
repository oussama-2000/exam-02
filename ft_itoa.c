#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int count_numbers(int nbr)
{
    int count = 0;
    if(nbr <= 0)
    {
        count++;
        nbr = -nbr;
    }
    while(nbr > 0)
    {
        nbr = nbr / 10;
        count++;
    }
    return count;
}


char *ft_itoa(int nbr)
{
    int n_count = count_numbers(nbr);
    char *result = malloc(n_count + 1);
    int flag = 0;
    int n = nbr;
    if(nbr < 0)
    {
        nbr = -nbr;
        result[0] = '-';
    }
    result[n_count + 1] = '\0';
    int i = n_count - 1;
    while(i >= flag)
    {
        if (n < 0)
            flag = 1;
        result[i] = (nbr % 10 ) + '0';
        nbr = nbr / 10;
        i--;
    }
    
    return result;
    
}

int main()
{
    int nbr = -122;
    char *res = ft_itoa(nbr);
    printf("%s\n",res);
}
