#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	char	*dest;
	int 	count;

	k = 0;
	i = 0;
	j = 0;
	count = 0;
	dest = malloc ((ft_strlen(s1)) * sizeof (char));
	if (dest == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		j = 0;
		count = 0;
		while (set[j] != '\0' && s1[i] != set[j])
		{
			j++;
			count++;
		}
		if (count == ft_strlen(set))
		{
			dest[k] = s1[i];
			k++;
		}
		i++;
	}
	k++;
	dest[k] = '\0';
	return (dest);
}

int main ()
{
	char s1[] = "ciaocomestai";
	char set[] = "staicomeciao";
	printf("%s\n", ft_strtrim(s1, set));
}
