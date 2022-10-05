#include <stdio.h>
char	*ft_strrchr(char *str, int c)
{
	int i = 0;
	int a = 0;
	char *str1;
	str1 = str;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
		    str1[a] = str[i];
			a++;
			printf("c");
		}

		printf("%c", str[i]);
		i++;
	}

}
int	main()
{
	char *a = "sacascasem";
	int b = 'e';
	ft_strrchr(a, b);
}
