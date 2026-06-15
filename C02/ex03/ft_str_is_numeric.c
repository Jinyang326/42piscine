/*
#include <unistd.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			ans = 0;
			return (ans);
		}
	}
	return (ans);
}

/*
void	putnbr(int n)
{
	char c;
	
	if (n >= 10)
		putnbr(n / 10);

	c = (n % 10) + '0'; 
	write(1, &c, 1);
}

int	main(void)
{
	int	result;

	result = ft_str_is_numeric("42KL");
	putnbr(result);
	return (0);
}
*/
