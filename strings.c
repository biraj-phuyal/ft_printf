#include "ft_printf.h"
#include <unistd.h>

int ft_char(char c)
{
	return (write(1, &c, 1));
}

int ft_percentage(char c)
{
	return (write(1, "%", 2));
}

int ft_strs(va_list args, char *str)
{
	int i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 7));
	while(*str)
	{
		write(1, str[i], 1);
		i++;
	}
	return (i);
}