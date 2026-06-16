#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	if (nb >= INT_MIN && nb <= INT_MAX)
	{
		if (nb == INT_MIN)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}

		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}

		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
		else
		{
			nb = nb + '0';
			ft_putchar(nb);
		}

	}

}

/*
int	main(void)
{
	ft_putnbr(5);
	ft_putnbr(-5);
	ft_putnbr(15);
	return (0);
}
*/
