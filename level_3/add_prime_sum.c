/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

-------------------------------------------------------------------------------- */

#include <unistd.h>

int is_positive(char *n)
{
	int	i;

	i = 0;
	if (n[i] == '-')
		return (0);
	return (1);
}

int	mini_atoi(char *n)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (n[i])
	{
		sum = (sum * 10) + (n[i] - 48);
		i++;
	}
	return (sum);
}

int	is_prime(int n)
{
	int	i;
	
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int n)
{
	int	sum;
	int	i;

	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum = sum + i;
		i++;
	}
	return (sum);
}

void	ft_put_nbr(int n)
{
	char	c;

	if (n > 9)
		ft_put_nbr(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	num;
	
	num = 0;
	if (argc == 2 && is_positive(argv[1]) == 1)
	{
		num = mini_atoi(argv[1]);
		ft_put_nbr(add_prime_sum(num));
	}
	else 
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
