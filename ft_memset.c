/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:11:29 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/08 15:59:16 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*d;

	i = n - 1;
	d = (char *)s;
	while (i >= 0)
	{
		d[i] = c;
		i--;
	}
	return (d);
}
