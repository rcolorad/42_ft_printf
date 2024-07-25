/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:53:58 by rcolorad          #+#    #+#             */
/*   Updated: 2024/07/25 17:53:58 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsig(unsigned int n)
{
	int				count_chars;
	unsigned int	num;

	num = n;
	count_chars = 0;
	if (n > 9)
	{
		count_chars += ft_putunsig(num / 10);
		count_chars += ft_putunsig(num % 10);
	}
	else
		count_chars += ft_putchar(num + '0');
	return (count_chars);
}
