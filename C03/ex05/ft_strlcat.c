#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		j = 0;
		while (src[j] != '\0' && i < size)
		{
			dest[i+j] = src[j];
		}
	}
}

int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "World!!!";
	unsigned int	size = 9;

	ft_strlcat(dest, src, size);
	return (0);
}
