#include "ft_printf.h"

static int	put_hex_ptr(uintptr_t ptr)
{
	char	*lowercase;
	int		count_chars;

	count_chars = 0;
	lowercase = "0123456789abcdef";
	if (ptr >= 16)
	{
		count_chars += put_hex_ptr(ptr / 16);
		count_chars += put_hex_ptr(ptr % 16);
	}
	else
		count_chars += ft_putchar(lowercase[ptr]);
	return (count_chars);
}

int	ft_putptr(void *ptr)
{
	int			count_chars;
	uintptr_t	num;

	count_chars = 0;
	num = (uintptr_t)ptr;
	count_chars += write(1, "0x", 2);
	count_chars += put_hex_ptr(num);
	return (count_chars);
}