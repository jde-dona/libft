/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:06:27 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/05 15:43:40 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_bzero(void *s, unsigned int n)
{
	int i;
	char *d = (char *) s;
	i = n - 1;
	while (i >= 0)
	{
		d[i] = '0';
		i--;
	}
}
