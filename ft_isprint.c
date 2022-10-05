/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:58:45 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/04 16:03:23 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
int	ft_isprint(int c)
{
	if (c >= 32 && c<= 126)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int	main()
{
	int a = 30;
	while (a < 131)
	{
		printf("%d\n", ft_isprint(a));
		printf("%d\n", isprint(a));
		printf("\n");
		a++;
	}
}
