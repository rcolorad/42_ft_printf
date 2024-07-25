/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:03:05 by rcolorad          #+#    #+#             */
/*   Updated: 2024/07/25 18:03:05 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		print_flags(unsigned int count_chars, int flag, va_list args);

int		ft_putchar(int c);
int		ft_puthex(unsigned int n, int tf);
int		ft_putnbr(int n);
int		ft_putptr(void *ptr);
int		ft_putstr(char *s);
int		ft_putunsig(unsigned int n);

char	*ft_strchr(const char *str, int c);

#endif
