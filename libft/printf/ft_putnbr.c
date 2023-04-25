/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:01:27 by vpac              #+#    #+#             */
/*   Updated: 2022/12/16 05:09:34 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstrprint("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putcharcount(('-'), count);
	}
	if (n >= 10)
		ft_putnbr(n / 10, count);
	ft_putcharcount(n % 10 + 48, count);
}
