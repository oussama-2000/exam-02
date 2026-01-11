#include <unistd.h>


int is_space(char c)
{
    return ((c == 32) || (c >= 9 && c <= 13));
}


int main(int ac, char **av)
{
    if(ac == 2)
    {
    
        int i = 0;
        while (av[1][i])
            i++;
        
        i--;
        while(is_space(av[1][i]))
            i--;
        if (!av[1][i])
        {
            write(1, "\n", 1);
            return 0;
        }
        while(!is_space(av[1][i]))
            i--;
        i++;
        while(av[1][i] && !is_space(av[1][i]))
        {
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}
