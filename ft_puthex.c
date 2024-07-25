/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:54:18 by rcolorad          #+#    #+#             */
/*   Updated: 2024/07/25 17:54:18 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, int tf)
{
	char	*lowercase;
	char	*uppercase;
	int		count_chars;

	count_chars = 0;
	lowercase = "0123456789abcdef";
	uppercase = "0123456789ABCDEF";
	if (num >= 16)
	{
		count_chars += ft_puthex(num / 16, tf);
		count_chars += ft_puthex(num % 16, tf);
	}
	else
	{
		if (tf == 1)
			count_chars += ft_putchar(lowercase[num]);
		else
			count_chars += ft_putchar(uppercase[num]);
	}
	return (count_chars);
}
