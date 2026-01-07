#include "LIST.H"


// int ascending(int a, int b)
// {
//         return (a <= b);
// }
t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    int tmp;
    t_list *head = lst;

    while(head->next)
    {
        if(!cmp(head->data , head->next->data))
        {
            tmp = head->data;
            head->data = head->next->data;
            head->next->data = tmp;
            head = lst;
        }
        else 
            head = head->next;
    }
    return lst;
}
// t_list *lst_new(int value)
// {
//     t_list *node;
//     node = malloc(sizeof(t_list));

//     node->data = value;
//     node->next = NULL;
//     return node;
// }
// int main()
// {
//     t_list *node0 = lst_new(0);
//     t_list *node1 = lst_new(2);
//     t_list *node3 = lst_new(0);
//     t_list *node2 = lst_new(4);

//     node0->next = node1;
//     node1->next = node2;
//     node2->next = node3;

//     t_list *sorted = sort_list(node0,ascending);

//     while(sorted)
//     {
//         printf("%d\n",sorted->data);
//         sorted = sorted->next;
//     }
// }
