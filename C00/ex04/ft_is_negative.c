#include <unistd.h>

void	ft_is_negative(int n)
{
	char ans;

	if (n < 0)
	{
		ans = 'N';
		write(1, &ans, 1);
	}
	else
	{
		ans = 'P';
		write(1, &ans, 1);
	}
}

int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-5);
	return (0);
}
