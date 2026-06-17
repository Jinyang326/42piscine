#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	*range = malloc((max - min) * sizeof(int));
	i = 0;
	if (min >= max)
		*range = '\0';
		return (0);
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (max - min);
}

int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	size;

	min = 3;
	max = 8;
	size = ft_ultimate_range(&arr ,min ,max);

	printf("Size %d", size);
	while (i < max - min)
	{
		printf("\nArray %d\n",arr[i])
		i++;
	}
	free(arr);
	return (0);
}
