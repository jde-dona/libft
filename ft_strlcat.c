unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				dim1;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dim1 = i;
	i = 0;
	while (src[i] != '\0' && (i < (size - dim1 - 1)))
	{
		dest[dim1 + i] = src[i];
		i++;
	}
	dest[dim1 + i] = '\0';
	return (dest);
}
