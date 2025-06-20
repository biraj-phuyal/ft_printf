#include "ft_printf.h"

int ft_strs(char *str)
{
	int i;
	
	i = 0;
	if (!str)
	return (write(1, "(null)", 6));
	while(*str)
	{
		write(1, str[i], 1);
		i++;
	}
	return (i);
}

int ft_char(char c)
{
	return (write(1, &c, 1));
}

int ft_percentage(char c)
{
	return (write(1, "%", 1));
}