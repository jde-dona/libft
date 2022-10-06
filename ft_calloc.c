void *ft_calloc(unsigned int nmemb, unsigned int size)
{
    char *src;
    int	i;

	i = 0;
    if (!((nmemb * size) >= 0 && (nmemb * size) <= 4294967295))
        return (0);
    src = malloc(nmemb * size);
    if(src == NULL || (nmemb == 0 || size == 0))
        return NULL;
    while (i < (nmemb * size))
    {
        src[i] = '0';
        i++;
    }
	return (src);
}
