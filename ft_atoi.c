#include <stdio.h>
int	ft_atoi(const char *str)
{
	int i = 0;
	int n = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			n *= 10;
			n += (str[i] - 48);
		}
		else
		{
			return 0;
		}
		i++;
	}
	return n;
}

int	main(int ac, char **av)
{
	char *a = av[1];
	printf("%d", ft_atoi(a));
}
