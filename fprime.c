#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int n, i = 2;

    if (ac == 2 )
    {
        n = atoi(av[1]);
        if (n == 1)
        {
            printf("1/n");
            return 0;
        }
        while (n > 1)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if (n != i)
                    printf("*");
                n = n / i;
            }
            else
                i++;
        }
    }
    printf("\n");
    return 0;
}
