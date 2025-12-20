
#include <unistd.h>

int is_upper(char c)
{
    return(c >= 'A' && c <= 'Z');
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
       int i = 0;
       while(av[1][i])
       {
            if(av[1][i] == '\0')
            {
                write(1,"\n",1);
                break;
            }
            if(is_upper(av[1][i]) && i != 0)
            {
                write(1,"_",1);
                char letter = av[1][i] + 32;
                write(1,&letter,1);
            }
            else if (is_upper(av[1][i]))
            {
                char letter = av[1][i] + 32;
                write(1, &letter, 1);
            }
            else
                write(1,&av[1][i],1);
            i++;
            
       } 
    }
    write(1,"\n",1);
}