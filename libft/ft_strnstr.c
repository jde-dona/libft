/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbordoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:14:53 by nbordoni          #+#    #+#             */
/*   Updated: 2022/10/11 16:33:14 by nbordoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t		i;
	size_t		j;
	char		*str2;

	i = 0;
	str2 = (char *)str;
	if (to_find[0] == '\0')
	{
		return (str2);
	}
	while (str2[i] != '\0' && (i < n))
	{
		j = 0;
		while (str2[i + j] != '\0' && str2[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str2[i]);
			}
			++j;
		}
		++i;
	}
	return (0);
}
