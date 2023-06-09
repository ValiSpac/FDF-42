/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 04:50:00 by vpac              #+#    #+#             */
/*   Updated: 2022/12/16 05:08:17 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print(va_list args, const char *format, int *count, int *i)
{
	if (format[*i] == '%')
		ft_putcharcount(format[*i], count);
	else if (format[*i] == 'c')
		ft_putcharcount(va_arg(args, int), count);
	else if (format[*i] == 's')
		ft_putstrprint(va_arg(args, char *), count);
	else if (format[*i] == 'd' || format[*i] == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format[*i] == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (format[*i] == 'x')
		ft_puthex(va_arg(args, unsigned int), count);
	else if (format[*i] == 'X')
		ft_putuphex(va_arg(args, unsigned int), count);
	else if (format[*i] == 'p')
		ft_putpoint(va_arg(args, void *), count);
	*i += 1;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		n;

	va_start(args, format);
	i = 0;
	count = 0;
	n = ft_strlen(format);
	if (write(1, 0, 0) == -1)
		return (-1);
	while (format[i] && i < n)
	{
		if (format[i] != '%')
			ft_putcharcount(format[i++], &count);
		else if (i < n)
		{
			i ++;
			ft_print(args, format, &count, &i);
		}
	}
	va_end (args);
	return (count);
}
