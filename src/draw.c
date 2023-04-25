/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:04:14 by vpac              #+#    #+#             */
/*   Updated: 2022/12/20 13:29:33 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

float	ft_abs(float i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}

int	ft_color(t_fdf *a, t_fdf *b, t_fdf param)
{
	int	color;

	if ((a->z != param.z) || (b->z != param.z))
		color = 0xfc0345;
	else
		color = 0xBBFAFF;
	return (color);
}

void	line(t_fdf a, t_fdf b, t_fdf *param)
{
	float	step_x;
	float	step_y;
	float	max;
	int		color;

	set_param(&a, &b, param);
	step_x = b.x - a.x;
	step_y = b.y - a.y;
	max = ft_max(ft_abs(step_x), ft_abs(step_y));
	step_x /= max;
	step_y /= max;
	color = ft_color(&a, &b, *param);
	while ((int)(a.x - b.x) || (int)(a.y - b.y))
	{
		mlx_pixel_put(param->mlx_ptr, param->win_ptr, a.x, a.y, color);
		a.x += step_x;
		a.y += step_y;
		if (a.x > param->win_x || a.y > param->win_y || a.y < 0 || a.x < 0)
			break ;
	}
}

void	draw(t_fdf **matrix)
{
	int		y;
	int		x;

	print_menu(matrix[0][0]);
	y = 0;
	while (matrix[y])
	{
		x = 0;
		while (1)
		{
			if (matrix[y + 1])
				line(matrix[y][x], matrix[y + 1][x], &matrix[0][0]);
			if (!matrix[y][x].is_last)
				line(matrix[y][x], matrix[y][x + 1], &matrix[0][0]);
			if (matrix[y][x].is_last)
				break ;
			x++;
		}
		y++;
	}
}
