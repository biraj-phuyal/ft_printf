#include "ft_printf.h"
#include <unistd.h>

char *ft_str(const char *str)
{
	if (!str)
		write(1, "(null)", 7);
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
	return (str);
}

int ft_char(char c)
{
	return (write(1, &c, 1));
}

int ft_percentage(char c)
{
	return (write(1, "%", 2));
}