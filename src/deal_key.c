/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:35:01 by vpac              #+#    #+#             */
/*   Updated: 2022/12/20 13:42:27 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	is_key(int key)
{
	return (key == 24 || key == 69 || key == 27 || key == 78 || \
	key == 91 || key == 28 || key == 84 || key == 19 || \
	key == 123 || key == 124 || key == 125 || key == 126 || \
	key == 59 || key == 22 || key == 86 || key == 21 || \
	key == 49 || key == 88);
}

int	is_isometric_deal(t_fdf *param)
{
	if (param->is_isometric == 1)
		return (0);
	else
		return (1);
}

void	do_key(int key, t_fdf **matrix)
{
	if (key == 24 || key == 69)
		matrix[0][0].scale += 3;
	if (key == 27 || key == 78)
		matrix[0][0].scale -= 3;
	if (key == 91 || key == 28)
		matrix[0][0].z_scale += 1;
	if (key == 84 || key == 19)
		matrix[0][0].z_scale -= 1;
	if (key == 125)
		matrix[0][0].shift_y -= 10;
	if (key == 126)
		matrix[0][0].shift_y += 10;
	if (key == 124)
		matrix[0][0].shift_x -= 10;
	if (key == 123)
		matrix[0][0].shift_x += 10;
	if (key == 49 || key == 17)
		matrix[0][0].is_isometric = is_isometric_deal(&matrix[0][0]);
	if (key == 86 || key == 21)
		matrix[0][0].angle += 0.05;
	if (key == 88 || key == 22)
		matrix[0][0].angle -= 0.05;
}

int	deal_key(int key, t_fdf **matrix)
{
	if (is_key(key))
	{
		mlx_clear_window(matrix[0][0].mlx_ptr, matrix[0][0].win_ptr);
		do_key(key, matrix);
		print_menu(matrix[0][0]);
		draw(matrix);
	}
	if (key == 6 || key == 7 || key == 0 || key == 1)
		new_window(key, matrix);
	if (key == '5')
	{
		mlx_destroy_window(matrix[0][0].mlx_ptr, matrix[0][0].win_ptr);
		free(matrix);
		exit(0);
	}
	return (0);
}
