#include <stdlib.h>
#include <stdio.h>


int main(int ac, char **av)
{
    if (ac == 4)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[3]);
        char operator = av[2][0];

        if (operator == '+')
            printf("%d", n1 + n2);
        else if (operator == '-')
            printf("%d", n1 - n2);
        else if (operator == '*')
            printf("%d", n1 * n2);
        else if (operator == '/')
            printf("%d", n1 / n2);
        else if (operator == '%')
            printf("%d", n1 % n2);
    }
    printf("\n");
}