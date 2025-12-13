
#include <unistd.h>

int ft_isspace(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}
void ft_substr(char *str,int start,int end)
{
    int i = 0;
    while(i < start)
        i++;
    while(i < end)
    {
        write(1,&str[i],1);
        i++;
    }

}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int end = 0;
        int start = 0;
        
        while(ft_isspace(argv[1][i]))
            i++;
        if(argv[1][i] == '\0')
        {
            write(1,"\n",1);
            return 0;
        }
        while(argv[1][i] != '\0')
            i++;
        i--;
        while (i >= 0 && ft_isspace(argv[1][i]))
            i--;
        end = i+1;
        while(i >= 0 && !ft_isspace(argv[1][i]))
            i--;
        start= i+1;
        ft_substr(argv[1],start,end);
        write(1,"\n",1);
    }
    else
        write(1,"\n",1);

}
