/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:16:50 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/08 11:07:03 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*src;
	char		carattere;
	int			i;

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
