#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_printf(const char *format, ...)
{
	if (!format)
		return (-1);
	return (write(1, format, ft_strlen(format)));
}

int	main(void)
{
	int returned = ft_printf( "0", 923489792, -239483, "fsefwef", NULL);
	printf("FT_PRINTF RETURNED %d\n", returned);
}

