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

int	compare_str(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	buf[BUF_SIZE];
	int		bytes_read;
	char	target[] = "paiza";
	int		i;

	bytes_read = read(0, buf, BUF_SIZE - 1);
	if (bytes_read < 0)
		return (write(1, "read error", 10));
	buf[bytes_read] = '\0';
	i = 0;
	while(buf[i])
	{
		if (buf[i] == '\n')
			buf[i] = '\0';
		i++;
	}
	if(!compare_str(target, buf))
		print_str("YES\n");
	else
		print_str("NO\n");
	return (0);
}
