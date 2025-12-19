#include <unistd.h>

int is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}
int is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}
int is_space(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}

int main(int ac, char **av)
{
    if(ac >= 2)
    {
        int i = 1;
        while(i < ac)
        {
            int j = 0;
            int up_it = 1;
            while(av[i][j])
            {
                if(is_lower(av[i][j]) && (up_it == 1))
                {
                    char letter = av[i][j] - 32;
                    write(1,&letter,1);
                    up_it = 0;
                }
                else if(is_space(av[i][j]))
                {
                    up_it = 1;
                    write(1,&av[i][j],1);
                }
                else
                {
                    if(is_upper(av[i][j]) && !up_it)
                    {
                        char c = av[i][j] + 32;
                        write(1,&c,1);
                    }
                    else
                        write(1,&av[i][j],1);
                    up_it = 0;
                }
                j++;
            }
            write(1,"\n",1);
            i++;
        }
    }
    else
        write(1,"\n",1);
}