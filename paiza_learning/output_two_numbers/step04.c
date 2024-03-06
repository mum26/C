#include <unistd.h>

int	cnt_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*cpy_str(char *dst, char *src)
{
	int	i;
	int	len;

	if (dst == NULL || src == NULL)
		return (NULL);
	len = cnt_len(src);
	i = -1;
	while (++i < len)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

int	main(void)
{
	char	str[4];
	int		len;
	int		i;

	cpy_str(str, "813");
	len = cnt_len(str);
	i = 0;
	while (i < len)
	{
		write(1, &str[i++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
