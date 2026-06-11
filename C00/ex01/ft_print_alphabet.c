#include <unistd.h>

void	ft_print_alphabet(void)
{
	char counter;

	counter = 'a';
	while (counter <= 'z')
	{
		write(1, &counter, 1);
		counter++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
