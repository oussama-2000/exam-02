#include <stdio.h>
#include <unistd.h>

int is_space(char c)
{
    return ((c >= 9 && c <= 13) || (c == 32));
}

int main(int ac ,char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while (is_space(av[1][i]))
            i++;
        while(av[1][i])
        {       
            if(!is_space(av[1][i]))
                write(1,&av[1][i],1);
            if(is_space(av[1][i]))
            {
                if(av[1][i + 1] != '\0')
                    write(1,&av[1][i],1);
                while(is_space(av[1][i + 1]))
                    i++;
            }
            i++;
        }
    }
    write(1,"\n",1);
}