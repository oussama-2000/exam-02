
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    char a;
    int x;

    i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
        
    while (argv[1][i])
    {
        x = 'a' + ('z' - argv[1][i]);
        write(1,&x,1);  
        i++;      
    }
}