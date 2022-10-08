/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbordoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:46:11 by nbordoni          #+#    #+#             */
/*   Updated: 2022/10/07 11:51:44 by nbordoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <publib.h>
#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	char	*dest;

	i = 0;
	while (set[i] != '\0')
		i++;

}

int	main()
{
	printf("%s", strtrim("   ciao    "));
}
