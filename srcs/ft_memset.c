/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdofuku <tdofuku@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 03:27:21 by tdofuku           #+#    #+#             */
/*   Updated: 2020/07/12 15:37:37 by tdofuku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		*(str + i) = (unsigned char)ch;
		i++;
	}
	return (str);
}
