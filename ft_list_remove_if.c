
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *prev = *begin_list;
    t_list *cur = prev->next;

    if (cmp(prev->data, data_ref) == 0)
    {
        *begin_list = cur;
        free(prev);
    }
    else
    {
        while (prev->next)
        {
            if (cmp(prev->data, data_ref) == 0)
            {
                cur = prev->next;
                free(prev);
                prev = cur;
            }
            prev = prev->next;
        }
    }
}
