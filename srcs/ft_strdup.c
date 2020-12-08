/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdofuku <tdofuku@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 16:57:41 by tdofuku           #+#    #+#             */
/*   Updated: 2020/07/12 02:32:50 by tdofuku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	if (!(dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (0);
	i = 0;
	while ((src)[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
