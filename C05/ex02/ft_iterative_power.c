int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return 0;
	else if (power == 0)
		return 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

#include <stdio.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main()
{
	printf("%i", ft_iterative_power(-4, 2));
}


