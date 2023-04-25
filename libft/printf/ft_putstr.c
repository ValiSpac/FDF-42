/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:33:22 by vpac              #+#    #+#             */
/*   Updated: 2022/12/16 05:08:31 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrprint(const char *str, int *count)
{
	int	i;

	if (!str)
		*count += write(1, "(null)", 6);
	else
	{
		i = 0;
		while (str[i])
			ft_putcharcount(str[i++], count);
	}
}
