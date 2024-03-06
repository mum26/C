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
	char	buf[128];
	int		bytes_read;
	int		i;

	bytes_read = read(0, buf, 127);
	buf[bytes_read] = '\0';
	i = 0;
	while(buf[i])
		print_char(buf[i++]);
	return (0);
}
