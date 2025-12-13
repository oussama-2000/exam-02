#include <unistd.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *arr;
    int n = 0;
    int i = 0;
    int s = start;
    int e = end;

    if (end >= start)
    {
        while (e >= s)
        {
            e--;
            n++;
        }
    }
    else
    {
        while (e <= s)
        {
            s--;
            n++;
        }
    }
    arr = malloc(n * sizeof(int) + 1);
    if (end >= start)
    {
        while (i < n)
        {
            arr[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        while (i < n)
        {
            arr[i] = start;
            start--;
            i++;
        }
    }

    return (arr);
}
