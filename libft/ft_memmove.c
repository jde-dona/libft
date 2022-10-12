/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbordoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:41:57 by nbordoni          #+#    #+#             */
/*   Updated: 2022/10/10 19:05:40 by nbordoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char			*dest;
	const char		*src;
	char			carattere;
	size_t			i;

	dest = (char *)str1;
	src = (char *)str2;
	carattere = 'e';
	i = 0;
	while (i < n)
	{
		carattere = src[i];
		dest[i] = carattere;
		i++;
	}
	return (dest);
}
