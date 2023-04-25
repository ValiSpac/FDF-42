/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_menu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:30:27 by vpac              #+#    #+#             */
/*   Updated: 2022/12/20 13:42:38 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_menu(t_fdf param)
{
	char	*menu;

	menu = "up, down, left, right: move picture";
	mlx_string_put(param.mlx_ptr, param.win_ptr, 10, 5, 0x03fc35, menu);
	menu = "space: 3d/2d mode; +, -: zoom";
	mlx_string_put(param.mlx_ptr, param.win_ptr, 10, 20, 0x03fc35, menu);
	menu = "8, 2: z-scale; 4, 6: rotation";
	mlx_string_put(param.mlx_ptr, param.win_ptr, 10, 35, 0x03fc35, menu);
	menu = "a, s, z, x:window size";
	mlx_string_put(param.mlx_ptr, param.win_ptr, 10, 50, 0x03fc35, menu);
}
