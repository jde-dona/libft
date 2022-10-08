/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:32:14 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/06 14:45:00 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	int	n1;
	int	n2;
	int	i;
	char	*dest;

	n1 = 0;
	n2 = 0;
	while (s1[n1] != '\0')
		n1++;
	while (s2[n2] != '\0')
		n2++;
	i = n1 + n2;
	dest = malloc(i * sizeof(char));
	if (dest == NULL)
		return NULL;
	i = 0;
	while (i < n1)
	{
		dest[i] = s1[i];
		i++;
	}
	n1 = 0;
	while (n1 < n2)
	{
		dest[i] = s2[n1];
		i++;
		n1++;
	}
	dest[i] = '\0';
	return dest;
}
