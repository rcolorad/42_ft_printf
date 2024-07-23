#include "ft_printf.h"

int ft_putchar(int c)
{
    int count_chars;

    count_chars = write(1, &c, 1);
    return (count_chars);
}