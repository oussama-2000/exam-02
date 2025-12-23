

#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    int i = 0;


    while(str[i])
    {
        result = result * 10 +( str[i] - '0');
        i++; 
    }
    return (result);
}

void print_hex(int n,int base)
{

    char hex[] = "0123456789abcdef";
    char result;
    
    if(n >=  16)
    {
        print_hex(n / base,base);
    }
    result = hex[n % base];
    write(1,&result,1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = ft_atoi(av[1]);
        print_hex(n, 16);
    }
    write(1,"\n",1);
}