/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:54:20 by rcolorad          #+#    #+#             */
/*   Updated: 2024/07/25 17:54:20 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	num;
	int			count_chars;

	num = n;
	count_chars = 0;
	if (num < 0)
	{
		count_chars++;
		write (1, "-", 1);
		num *= -1;
	}
	if (num > 9)
	{
		count_chars += ft_putnbr(num / 10);
		count_chars += ft_putnbr(num % 10);
	}
	else
		count_chars += ft_putchar(num + '0');
	return (count_chars);
}
