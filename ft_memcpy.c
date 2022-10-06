/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:46:38 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/06 11:30:42 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	*ft_memcpy(void *dest, const void * src, int n)
{
	char *d = (char *) dest;
	const char *s = (char *) src;
	int i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return d;
}