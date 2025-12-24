
int ft_converter(char c, int base)
{
    char b[] = "0123456789abcdef";
    int i = 0;

    if(c >= 'A' && c <= 'F')
        c = c + 32;
   
    while(i < base)
    {
        if(b[i] == c)
            return  i;
        i++;
    }
    return -1;
}

int ft_atoi_base(const char *str,int str_base)
{
    int i = 0;
    int converted = 0;
    int digit;
    int sign = 1;


    while (str[i] == ' ')
        i++;
    if(str[i] == '-')
    {
        sign = -sign;
        i++;
    }  

    while(str[i])
    {
        digit = ft_converter(str[i], str_base);
        if(digit == -1)
            break;

        converted = converted * str_base + digit;
        i++;
    }
    return converted * sign; 
}



