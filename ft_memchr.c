/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:17:24 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/08 10:58:33 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*str1;
	int		i;

	str1 = (char *)str;
	i = 0;
	while (i < n)
	{
		if (str1[i] == c)
		{
			return (&str1[i]);
		}
		i++;
	}
	return (0);
}
