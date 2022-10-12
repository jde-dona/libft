/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbordoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:39:47 by nbordoni          #+#    #+#             */
/*   Updated: 2022/10/10 19:04:09 by nbordoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_printfunct(int neg, char *dest, int number, int n)
{
	if (neg != 0)
	{
		dest[0] = '-';
		while (number > 0)
		{
			dest[number] = (n % 10) + 48;
			n /= 10;
			number--;
		}
	}
	else
	{
		if (n == 0)
		{
			dest[0] = 48;
			return (dest);
		}
		dest[number] = '\0';
		while ((--number) >= 0)
		{
			dest[number] = (n % 10) + 48;
			n /= 10;
		}
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	int		number;
	char	*dest;
	int		num_div;
	int		neg;

	neg = 0;
	number = 0;
	if (n < 0)
	{
		n *= -1;
		neg = -1;
	}
	num_div = n;
	while (num_div >= 0)
	{
		num_div /= 10;
		number++;
	}
	dest = malloc ((number + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_printfunct(neg, dest, number, n);
	return (dest);
}
