#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str++ != '\0')
		i++;
	return i;
}

int	main(int arg_elements, char *arg_strings[])
{
	int	i;
	int	length;

	if (arg_elements <= 1)
	{
		write(1, "引数が指定されていません。\n", 29);
		return (0);
	}
	i = 1;
	while(i < arg_elements)
	{
		length = ft_strlen(arg_strings[i]);
		write(1, arg_strings[i], length);
		i++;
	}
	return (0);
}
