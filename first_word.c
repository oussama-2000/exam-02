#include <unistd.h>

int ft_isspace(char c)
{
    return (c == 32 || (c >= 9 && c <= 13 ));

}
int main(int argc,char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        while (ft_isspace(argv[1][i]) && argv[1][i] != '\0')
            i++;
        if(argv[1][i] == '\0')
        {
            write(1,"\n",1);
            return 0;
        }
        while(!ft_isspace(argv[1][i]) && argv[1][0] != '\0')
        {
            write(1,&argv[1][i],1);
            i++;
        }
        write(1,"\n",1);
    }
    else
        write(1,"\n",1);
}