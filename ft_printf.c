#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int formater(va_list args, const char format)
{
	int length;

	length = 0;
	while (format)
	{
		if (format == 'c')
			length += ft_char(va_args(format));
		if (format == 's')
			ft_str(va_args(format));
		if (format == 'p')
			hexa(va_args(format));
		if (format == 'd')
			ft_num(va_args(format));
		
	}
	
}

int	ft_printf(const char *format, ...)
{
	int i;
	int length;
	va_list args;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += formater(args, format[i + 1]);
			i++;
		}
		else
			ft_char(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}
/* 
int	main(void)
{
	int returned = printf( "", -239483, "fsefwef", NULL);
	printf("FT_PRINTF RETURNED %d\n", returned);
}
 */
