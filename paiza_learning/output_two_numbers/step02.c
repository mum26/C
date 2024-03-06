#include <unistd.h>

int	cnt_len(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	main(void)
{
	char str1[] = "paiza";
	char str2[] = "learning";
	int		len;

	len = cnt_len(str1);
	write(1, str1, len);
	write(1, " ", 1);
	len = cnt_len(str2);
	write(1, str2, len);
	write(1, "\n", 1);
	return (0);
}
