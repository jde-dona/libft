/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:16:50 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/06 11:32:02 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char *dest = (char *)str1;
	const char *src = (char *)str2;
	char carattere = 'e';
	int i = 0;
	while (i < n)
		{
			carattere = src[i];
			dest[i] = carattere;
			i++;
		}
	return dest;
}
