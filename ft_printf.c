#include "ft_printf.h"

int ft_formater(va_list args, const char format)
{
	int length;

	length = 0;
	if (format == 'c')
		length += ft_char(va_arg(args, int));
	else if (format == 's')
		length += ft_strs(va_arg(args, char *));
	else if (format == 'p')
		length += ft_hexa(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		length += ft_num(va_arg(args, int));
	else if (format == '%')
		length += ft_percentage(va_arg(args, int));
	else if (format == 'u')
		length += ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		length += hexa(va_arg(args, unsigned int));
	 else if (format == 'X')
	 	  length += ft_upper_hexa(va_arg(args, unsigned int));
	else
		length += ft_char(format);
	return (length);
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
			length += ft_formater(args, format[i + 1]);
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
