/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:53:51 by rcolorad          #+#    #+#             */
/*   Updated: 2024/07/25 17:53:51 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
