/*
#include <unistd.h>
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/*
int	main(void)
{
	char	dest[10];
	char	src[] = "42KL";

	ft_strncpy(dest, src, 2);
	
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}

	return (0);
}
*/
