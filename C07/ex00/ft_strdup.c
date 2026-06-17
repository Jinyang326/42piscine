#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int	i;

	i = 0;
	copy = malloc(ft_strlen(str));
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

#include <stdio.h>
int	main(void)
{
	char	text[10] = "42KL";
	char	*result;

	result = ft_strdup(text);

	printf("Copy : %s",result);
	text[0] = '2';
	printf("\nText after edited: %s", text);
	printf("\nCopy after text edited: %s", result);
	free (result);
	return (0);
}
