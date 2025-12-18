#include <unistd.h>

int is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}

int is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            if (is_lower(argv[1][i]))
            {
                int count = (argv[1][i]) - 97 + 1;
                while (count > 0)
                {
                    write(1, &argv[1][i], 1);
                    count--;
                }
            }
            else if (is_upper(argv[1][i]))
            {
                int count = (argv[1][i]) - 65 + 1;
                while (count > 0)
                {
                    write(1, &argv[1][i], 1);
                    count--;
                }
            }
            else
                write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1, "\n", 1);
}