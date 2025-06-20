#ifndef	FT_PRINTF
#define FT_PRINTF

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_strs(va_list args, char *str);
int ft_char(char c);
int ft_percentage(char c);

#endif