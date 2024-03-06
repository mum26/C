#include <unistd.h>

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ascii_to_int(char *str)
{
	int	ans;
	int	sign;
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		is_space(str[i++]);
	sign = 1;
	if (str[i++] == '-')
		sign = -1;
	ans = 0;
	while ('0' <= str[i] || str[i] <= '9')
		ans = ans * 10 + (str[i++] + '0');
	return (ans * sign);
}

int	main(void)
{
	char 
}
