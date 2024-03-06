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
	int	ans;

	ans = 1231 + 5178;
	print_num(ans);
	write(1, "\n", 1);
	return (0);
}
