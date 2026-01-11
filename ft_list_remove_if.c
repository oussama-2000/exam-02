
#include "ft_list.h"

t_list *lst_new(int data)
{
    t_list *node;
    node = malloc(sizeof(t_list));
    node->data = data;
    node->next =  NULL;
    return node;
}
int compare(int n1, int n2)
{
    if(n1 == n2)
        return 0;
    return 1;
}
void ft_list_remove_if(t_list **begin_list, int data_ref, int (*cmp)())
{
    t_list *prev = *begin_list;
    if(cmp(prev->data,data_ref) == 0)
    {
        *begin_list = prev->next;
        free(prev);
    }
    t_list *cur = prev->next;

    while(cur)
    {
        if (cmp(cur->data, data_ref) == 0)
        {
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
    
}

// int main()
// {
//     t_list *node1 = lst_new(1);
//     t_list *node2 = lst_new(2);
//     t_list *node3 = lst_new(3);

//     node1->next = node2;
//     node2->next = node3;
//     ft_list_remove_if(&node1,3,compare);
//     while(node1)
//     {
//         printf("%d\n",node1->data);
//         node1 = node1->next;
//     }
// }
