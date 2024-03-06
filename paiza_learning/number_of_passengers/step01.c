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

int	main(void)
{
	char	buf[BUF_SIZE];
	int		bytes_read;

	bytes_read = read(0, buf, BUF_SIZE - 1);
	if (bytes_read < 0)
		return (write(1, "read error", 10));
	buf[bytes_read] = '\0';
	print_str(buf);
	print_char('\n');
	return (0);
}
