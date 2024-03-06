#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_num(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		print_char('-');
		num = -num;
	}
	if (num > 9)
		print_num(num / 10);
	print_char("0123456789"[num % 10]);
}

int	power(int x, int y)
{
	int	ans;
	int	i;

	ans = 1;
	i = -1;
	while (++i < y)
		ans *= x;
	return (ans);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	ans;

	a = 202;
	b = 134;
	c = 107;
	ans = power((a + b) * c, 2);
	print_num(ans);
	print_char('\n');
	return (0);
}
