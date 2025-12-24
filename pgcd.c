#include <stdio.h>
#include <stdlib.h>

int find_big_denominator(int a, int b)
{

    int i = a;
    while(a > 0)
    {
        if(a % i == 0 && b % i == 0)
            return i;
        i--;
    }
    return 0;
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int a = atoi(av[1]);
        int b = atoi(av[2]);
        int d = find_big_denominator(a,b);
        printf("%d",d); 
    }
    printf("\n");
}