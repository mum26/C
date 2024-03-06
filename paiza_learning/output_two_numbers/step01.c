#include <unistd.h>

int	cnt_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	char str[] = "paiza\n";
	int len;

	len = cnt_len(str);
	write(1, str, len);
	return (0);
}
