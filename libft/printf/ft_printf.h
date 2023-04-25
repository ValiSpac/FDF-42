/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:15:11 by vpac              #+#    #+#             */
/*   Updated: 2022/12/16 05:08:24 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <fcntl.h>

void		ft_putcharcount(int c, int *count);
int			ft_printf(const char *format, ...);
void		ft_print(va_list args, const char *format, int *count, int *i);
void		ft_putstrprint(const char *str, int *count);
void		ft_putnbr(int n, int *count);
void		ft_putuphex(unsigned long n, int *count);
void		ft_puthex(unsigned long n, int *count);
void		ft_putpoint(void *p, int *count);
size_t		ft_strlen(const char *str);
void		ft_putunbr(unsigned int n, int *count);

#endif
