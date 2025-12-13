#include <unistd.h>


void    search_and_replace(char *str,char to,char by)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i]  == to)
            str[i] = by;
        i++;
    }
    i = 0;
    while(str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
    write(1,"\n",1);
}

int main(int argc,char **argv)
{

    if(argc == 4)
    {
        if((argv[2][1] != '\0') || (argv[3][1] != '\0') )
            write(1,"\n",1);
        else
            search_and_replace(argv[1],argv[2][0],argv[3][0]);
    }
    else
    {
        write(1,"\n",1);
    }
}