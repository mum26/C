#include <unistd.h>

#define BUF_SIZE 128

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		print_char(str[i++]);
}

void	print_num(int num)
{
	if (num == -2147483648)
	{
		print_str("-2147483648");
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

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ascii_to_int(char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	while(is_space(str[i]))
		i++;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	num = 0;
	while('0' <= str[i] && str[i] <= '9')
		num = num * 10 + (str[i++] - '0');
	return (num * sign);
}

int	main(void)
{
	char	buf[BUF_SIZE];
	int		bytes_read;
	int		cnt;
	int		n;
	int		a;
	int		b;
	int		c;
	int		i;

	bytes_read = read(0, buf, BUF_SIZE - 1);
	if (bytes_read < 0)
		return (write(1, "read error", 10));
	buf[bytes_read] = '\0';

	a = ascii_to_int(buf);
	cnt = 0;
	i = 0;
	while(buf[i])
	{
		if (is_space(buf[i]))
			cnt++;
		if (is_space(buf[i]) && cnt == 1)
			b = ascii_to_int(&buf[i]);
		if (is_space(buf[i]) && cnt == 2)
			c = ascii_to_int(&buf[i]);
		i++;
	}

	n = 0;
	n += a;
	n *= b;
	n %= c;
	print_num(n);
	print_char('\n');
	return (0);
}
