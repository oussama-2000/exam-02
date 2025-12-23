
int max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int tmp;

    if(!tab  || (len == 0))
        return 0;
    while(i < len - 1)
    {   
        if(tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
    return (tab[len - 1]);
}
