/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:41:53 by vpac              #+#    #+#             */
/*   Updated: 2022/12/16 03:40:22 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	check_win_size(int key, t_fdf **matrix)
{
	if ((key == 0 && matrix[0][0].win_y <= 500) || \
		(key == 6 && matrix[0][0].win_x <= 500))
		return (1);
	if ((key == 1 && matrix[0][0].win_y > 1000) || \
		(key == 7 && matrix[0][0].win_x > 2000))
		return (1);
	return (0);
}

void	change_window_size(int key, t_fdf **matrix)
{
	if (check_win_size(key, matrix))
		return ;
	if (key == 6)
		matrix[0][0].win_x -= 100;
	if (key == 7)
		matrix[0][0].win_x += 100;
	if (key == 0)
		matrix[0][0].win_y -= 100;
	if (key == 1)
		matrix[0][0].win_y += 100;
}

void	new_window(int key, t_fdf **matrix)
{
	change_window_size(key, matrix);
	mlx_destroy_window(matrix[0][0].mlx_ptr, matrix[0][0].win_ptr);
	matrix[0][0].mlx_ptr = mlx_init();
	matrix[0][0].win_ptr = \
	mlx_new_window(matrix[0][0].mlx_ptr, matrix[0][0].win_x, \
					matrix[0][0].win_y, "FDF");
	matrix[0][0].shift_x = matrix[0][0].win_x / 3;
	matrix[0][0].shift_y = matrix[0][0].win_y / 3;
	draw(matrix);
	mlx_key_hook(matrix[0][0].win_ptr, deal_key, matrix);
	mlx_loop(matrix[0][0].mlx_ptr);
}
