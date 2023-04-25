/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:26:19 by vpac              #+#    #+#             */
/*   Updated: 2022/12/23 10:04:28 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	set_default(t_fdf *param)
{
	param->scale = 20;
	param->z_scale = 1;
	param->is_isometric = 1;
	param->angle = 0.5;
	param->win_x = 2000;
	param->win_y = 1000;
	param->shift_x = param->win_x / 3;
	param->shift_y = param->win_y / 3;
	param->mlx_ptr = mlx_init();
	param->win_ptr = \
	mlx_new_window(param->mlx_ptr, param->win_x, param->win_y, "FDF");
}

int	main(int argc, char **argv)
{
	t_fdf	**matrix;

	if (argc != 2)
		ft_error("ussage: ./fdf map.fdf");
	matrix = read_map(*++argv);
	set_default(&matrix[0][0]);
	draw(matrix);
	mlx_key_hook(matrix[0][0].win_ptr, deal_key, matrix);
	mlx_loop(matrix[0][0].mlx_ptr);
}
