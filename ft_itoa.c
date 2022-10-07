#include <stdlib.h>
char	*ft_itoa(int n)
{
	int	number;
	char	*dest;
	int	num_div;
	int	neg;

	neg = 0;
	number = 0;
	if (n < 0)
	{
		n *= -1;
		neg = -1;
	}
	num_div = n;
	while (num_div > 0)
	{
		num_div /= 10;
		number++;
	}
	if (neg != 0)
	{
		dest = malloc ((number + 1) * sizeof(char));
		if (dest == NULL)
			return (NULL);
		dest[0] = '-';
		while (number > 0)
		{
			dest[number] = (n % 10) + 48;
			n /= 10;
			number--;
		}
	}
	else
	{
		dest = malloc (number * sizeof(char));
		if (dest == NULL)
			return (NULL);
		number--;
		while (number >= 0)
		{
			dest[number] = (n % 10) + 48;
			n /= 10;
			number--;
		}
	}
	return (dest);
}
