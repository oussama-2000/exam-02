#include <unistd.h>
int ft_isspace(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}
int ft_islower(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        return 1;
    }
    return 0;
}
int ft_isapper(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    return 0;
}

int main(int argc, char **argv)
{
    char letter;
    if(argc == 2)
    {
        int i = 0;
        while(argv[1][i])
        {
            if(ft_isapper(argv[1][i]))
            {
                letter = argv[1][i] + 32;
                write(1,&letter,1);
            }
            else if (ft_islower(argv[1][i]))
            {
                letter = argv[1][i] - 32;
                write(1, &letter, 1);
            }
            else
                write(1, &argv[1][i],1);
            i++;
        }
        write(1, "\n" ,1);
    }
    else
    {
        write(1,"\n",1);
    }
}