#include "ft_printf.h"

int ft_printf(char const *str, ...)
{
    va_list args;
    unsigned int i;
    int count_chars;
    char *flags;

    i = 0;
    count_chars = 0;
    flags = "cspdiuxX%";
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%' && ft_strchr(flags, (str[i + 1])))
        {
            i++;
            count_chars += print_flags(count_chars, (int)str[i], args);
        }
        else
            count_chars += ft_putchar(str[i]);
        i++;
    }
    va_end(args);
    return (count_chars);
}

int print_flags(unsigned int count_chars, int flag, va_list args)
{
    if (flag == 'c')
        count_chars += ft_putchar(va_arg(args, int));
    else if (flag == 's')
        count_chars += ft_putstr(va_arg(args, char *));
    else if (flag == 'd' || flag == 'i')
        count_chars += ft_putnbr(va_arg(args, int));
    else if (flag == 'x')
        count_chars += ft_puthex(va_arg(args, unsigned int), 1);
    else if (flag == 'X')
        count_chars += ft_puthex(va_arg(args, unsigned int), 0);
    else if (flag == 'p')
        count_chars += ft_putptr(va_arg(args, void *));
    else if (flag == 'u')
        count_chars += ft_putunsig(va_arg(args, unsigned int));
    else
        count_chars += ft_putchar('%');
    return (count_chars);
}