#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int			count_chars;
	

	count_chars = 0;
	if (ptr == NULL)
		count_chars += write(1, "(nil)", 5);
	else
	{
		count_chars += write(1, "0x", 2);
		count_chars += ft_puthex((unsigned int)ptr, 1);
	}
	return (count_chars);
}