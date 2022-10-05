/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:46:38 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/05 16:02:56 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	*ft_memcpy(void *dest, const void * src, int n)
{
	n--;
	char *d = (char *) dest;
	char *s = (char *) src;
	int i = 0;
	while (i <= n)
	{
		d[i] = s[i];
		i++;
	}
	return d;
}
