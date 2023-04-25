/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:51:24 by vpac              #+#    #+#             */
/*   Updated: 2022/11/19 11:33:39 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuphex(unsigned long n, int *count)
{
	if (n >= 16)
	{
		ft_putuphex(n / 16, count);
		ft_putuphex(n % 16, count);
	}
	else if (n < 10)
		ft_putcharcount(n + 48, count);
	else
		ft_putcharcount(n + 55, count);
}
