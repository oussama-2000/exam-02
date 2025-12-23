
int is_power_of_2(unsigned int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    unsigned int a = 1;
    while(a <= n / 2)
    {
        a *= 2;
        if(a == n)
            return 1;
    }
    return 0;
}
