char	*ft_strdup(const char *s)
{
	char	*dest;
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	dest = malloc(i * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
