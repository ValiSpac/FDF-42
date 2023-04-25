/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:00:17 by vpac              #+#    #+#             */
/*   Updated: 2022/12/16 05:09:25 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpoint(void *p, int *count)
{
	ft_putstrprint("0x", count);
	ft_puthex((unsigned long)p, count);
}
