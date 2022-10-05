/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-dona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:27:21 by jde-dona          #+#    #+#             */
/*   Updated: 2022/10/05 17:38:41 by jde-dona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	char *s3 = (char *)s1;
	char *s4 = (char *)s2;
	int i = 0;
	if (n == 0 || (s3[0] == '\0' && s4[0] == '\0'))
		return 0;
	while (i < n)
	{
		if (s3[i] == s4[i])
		{
			if(i == (n - 1))
				return 0;
		}
		else if (s3[i] > s4[i])
			return 1;
		else if (s3[i] < s4[i])
			return -1;
		i++;
	}
}
#include <stdio.h>
int	main()
{
	char a[] = "budreha";
	char b[] = "sd";
	printf("%d", ft_memcmp(a,b,0));
}
