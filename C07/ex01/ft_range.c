#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	result = malloc((max - min) * sizeof(int));
	i = 0;
	if (min >= max)
		return ('\0');
	while (i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	int	*range;
	int	i;
	int	min;
	int	max;

	min = 3;
	max = 8;
	range = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d",range[i]);
		i++;
	}
	free (range);
	return (0);
}
