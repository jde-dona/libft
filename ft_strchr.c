#include <stdio.h>
char	*ft_strchr(char *str, int c)
{
	int i = 0;
	int a = 0;
	int d = 0;
	char *str1;
	str1 = str;
	while (str[i] != '\0')
	{
		if (d == 0 && str[i] == c)
		{
			d = 1;
			str1[a] = str[i];
			a++;
		}
		else if (d == 1)
		{
			str1[a] = str[i];
			a++;
		}
		i++;
	}
	str1[a] = '\0';
	return str1;
}
