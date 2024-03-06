#include <unistd.h>

int	main(void)
{
	char	str;
	int	i;

	str = '1';
	i = 0;
	while(i < 2)
	{
		write(1, &str, 1);
		if (i++ < 1)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}
