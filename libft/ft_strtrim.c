/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbordoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:50:50 by nbordoni          #+#    #+#             */
/*   Updated: 2022/10/10 19:05:58 by nbordoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_trim(const char *s1, char const *set, char *dest)
{
	size_t	count;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		count = 0;
		while (set[j] != '\0' && s1[i] != set[j])
		{
			j++;
			count++;
		}
		if (count == ft_strlen(set))
		{
			dest[k] = s1[i];
			k++;
		}
		i++;
	}
	k++;
	dest[k] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;

	dest = malloc ((ft_strlen(s1)) * sizeof (char));
	if (dest == NULL)
		return (NULL);
	ft_trim(s1, set, dest);
	return (dest);
}
