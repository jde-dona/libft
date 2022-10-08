/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:32:14 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/08 15:51:23 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		n;
	char	*dest;

	i = ((ft_strlen(s1)) + (ft_strlen(s2)));
	dest = malloc(i * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(s1)))
	{
		dest[i] = s1[i];
		i++;
	}
	n = 0;
	while (n < ft_strlen(s2))
	{
		dest[i] = s2[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
