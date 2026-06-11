#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char counter;

	counter = 'z';
	while (counter >= 'a')
	{
		write(1, &counter, 1);
		counter--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
