/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdofuku <tdofuku@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 07:40:44 by tdofuku           #+#    #+#             */
/*   Updated: 2020/12/04 03:15:21 by tdofuku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int	ft_get_list(DIR *dir, t_info **array, struct stat *stat_buf)
{
	struct dirent	*dent;
	t_info				*list;
	size_t				i;

	i = 0;
	while ((dent = readdir(dir)) != NULL)
	{
		stat(dent->d_name, stat_buf);
		if (!(list = ft_calloc(1, sizeof(t_info))))
		{
			ft_free_list(array);
			return 0;
		}
		list->name = ft_strdup(dent->d_name);
		list->mtime = stat_buf->st_mtime;
		array[i] = list;
		i++;
	}
	return 1;
}

void	ft_free_list(t_info **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	ft_count_dir(char *path)
{
	DIR						*dir;
	struct dirent	*dent;
	size_t				count;

	dir = opendir(path);
	if (dir == NULL)
	{
		perror(path);
		return (0);
	}
	count = 0;
	while ((dent = readdir(dir)) != NULL)
		count++;
	closedir(dir);
	return count;
}

int	main(int argc, char *argv[])
{
	char					*path;
	DIR						*dir;
	struct stat		stat_buf;
	t_info				**array;
	size_t				count;

	array = 0;
	path = "./";
	if (argc > 1)
		path = argv[1];
	if (!(count = ft_count_dir(path)))
		return 1;
	if (!(array = ft_calloc(count, sizeof(t_info))))
	{
		free(array);
		return 0;
	}
	dir = opendir(path);
	if (!ft_get_list(dir, array, &stat_buf))
		return 0;
	ft_sort_list(array);
	ft_put_list(array);
	closedir(dir);
	ft_free_list(array);
	return (0);
}
