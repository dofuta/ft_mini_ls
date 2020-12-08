/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdofuku <tdofuku@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 07:12:41 by tdofuku           #+#    #+#             */
/*   Updated: 2020/12/04 01:52:53 by tdofuku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_MINI_LS_H
#define	FT_MINI_LS_H
#define NAME_MAX 255
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>

typedef	struct	s_info
{
	char	*name;
	long	mtime;
}								t_info;

int			ft_putlists(t_info **array);
char		*ft_strdup(const char *src);
void		ft_sort_list(t_info **list);
int			ft_put_list(t_info **array);
void		ft_free_list(t_info **array);
void		ft_bzero(void *buf, size_t n);
void		*ft_calloc(size_t count, size_t size);
void		*ft_memset(void *buf, int ch, size_t n);
size_t	ft_strlen(const char *str);

#endif
