
#include "ft_mini_ls.h"

int	ft_put_list(t_info **array)
{
	int	i;

	i = 0;
	while(array[i])
	{
		if (array[i]->name[0] == '.')
		{
			i++;
			continue;
		}
		write(1, array[i]->name, ft_strlen(array[i]->name));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
