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

int	main(void)
{
	int	a;
	int	b;

	a = 437326;
	b = 9085;
	print_num(a / b);
	print_char(' ');
	print_num(a % b);
	print_char('\n');
	return (0);
}

