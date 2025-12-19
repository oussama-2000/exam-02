#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
        {

            char letter = av[1][i];
            if(letter == '\0')
                break;
            else if (letter >= 'a' && letter <= 'z')
            {
                if (letter >= 110) // middle (n)
                {
                    char c = letter - 13;
                    write(1,&c,1);
                }
                else
                {
                    char c  = letter + 13;
                    write(1,&c ,1);
                }
            }
            else if (letter >= 'A' && letter <= 'Z')
            {
                if (letter >= 78) // middle (N)
                {
                    char c = letter - 13;
                    write(1,&c,1);
                }
                else
                {
                    char c = letter + 13;
                    write(1,&c, 1);
                }
            }
            else
                write(1,&letter,1);
            i++;
        }
    }
    write(1, "\n", 1);
}