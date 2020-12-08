
#include "ft_mini_ls.h"

void	ft_sort_list(t_info **list)
{
    t_info    *tmp;
    size_t    i;
    size_t    j;

    i = 0;
    while (list[i] != NULL)
    {
        j = i + 1;
        while (list[j] != NULL)
        {
            if (list[i]->mtime > list[j]->mtime)
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
