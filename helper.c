#include "ft_printf.h"

int ft_hexa(va_list args, unsigned int)
{
    unsigned long num;
    if (args == NULL)
        return (0);
    num = va_arg(args, unsigned long);
    while (num >= 16)
    {
        if (num % 16 < 10)
            ft_char(num % 16 + '0');
        else
            ft_char(num % 16 - 10 + 'a');
        num /= 16;
    }
    if (num < 10)
        return (ft_char(num + '0'));
    return (ft_char(num - 10 + 'a'));
}

int ft_upper_hexa(va_list args, unsigned int)
{
    unsigned long num;
    if (args == NULL)
        return (0);
    num = va_arg(args, unsigned long);
    while (num >= 16)
    {
        if (num % 16 < 10)
            ft_char(num % 16 + '0');
        else
            ft_char(num % 16 - 10 - 'a');
        num /= 16;
    }
    if (num < 10)
        return (ft_char(num + '0'));
    return (ft_char(num - 10 - 'a'));
}

int ft_unsigned(va_list args, unsigned int)
{
    
}

int ft_itoa(int num)
{
    char *str;
    int i;

    i = ft_numlen(num);
    str = malloc(i + 1);
    while (*str)
    {
        *str = num[i];
        
    }
    
    
}

int ft_num(va_list args, int)
{

}