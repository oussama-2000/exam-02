#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = atoi(av[1]);
        if(n == 1)
        {
            printf("%d\n",1);
            return 0;
        }
        int div = 1;
        while(n > div++)
        {
            if(n % div == 0)
            {
                printf("%d",div);
                if(div != n)
                    printf("*");
                n /= div;
                div = 1;
            }
        }
    }
    printf("\n");
