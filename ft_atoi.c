
int is_space(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}
int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while(is_space(str[i]))
        i++;
    
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    if(!(str[i] >= '0' && str[i]<= '9'))
        return 0;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + str[i] - '0';
        i++; 
    }
    return (result  * sign);
}
