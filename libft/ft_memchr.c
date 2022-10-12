/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbordoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:01:00 by nbordoni          #+#    #+#             */
/*   Updated: 2022/10/10 19:03:29 by nbordoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char			*str1;
	unsigned int	i;

	i = 0;
	str1 = (char *) str;
	while (i < n && str1[i] != '\0')
	{
		if (str1[i] == c)
		{
			return (&str1[i]);
		}
		i++;
	}
	return (0);
}
