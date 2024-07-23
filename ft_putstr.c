#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count_chars;

	count_chars = 0;
	if (!s)
	{
		count_chars += write(1, "(null)", 6);
		return (count_chars);
	}
	while (*s != '\0')
	{
		count_chars += (write(1, s, 1));
		s++;
	}
	return (count_chars);
}