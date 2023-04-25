/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:17:36 by vpac              #+#    #+#             */
/*   Updated: 2022/11/19 11:33:16 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long n, int *count)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, count);
		ft_puthex(n % 16, count);
	}
	else if (n < 10)
		ft_putcharcount(n + 48, count);
	else
		ft_putcharcount(n + 87, count);
}
