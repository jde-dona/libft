/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:14:46 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/08 12:12:00 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int 	b;
	int	counter;
	char	**arr;
	int	last;

	i = 0;
	last = 0;
	counter = 0;
	b = 0;
	int x = 0;
	while (s[b] != '\0')
		b++;

	arr = malloc(b * sizeof(char *));
	while (s[i] != '\0')
	{
		j = last;
		if (s[i] == c)
		{
			last = i;
			arr[counter] = malloc((last - j) * sizeof(char));
			while (j < last)
			{
				arr[counter][x] = s[j];
				j++;
				x++;
			}
			last++;
			counter++;
		}
		x = 0;
		i++;
	}

	arr[counter] = malloc((i - last) * sizeof(char));
	while (last < i)
	{
		arr[counter][x] = s[last];
		x++;
		last++;
	}
	counter++;
	i = 0;
	while (b > counter)
	{
		free(arr[counter]);
		counter++;
	}
	return arr;
}

int	main()
{
	char **c = ft_split("supercalifragilistighespiralidoso", 'i');
	int i = 0;
	while (i < 7)
	{
		printf("%s", c[i]);
		i++;
	}
}
