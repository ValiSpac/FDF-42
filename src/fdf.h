/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpac <vpac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:20:03 by vpac              #+#    #+#             */
/*   Updated: 2022/12/19 16:17:55 by vpac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "../libft/libft.h"
# include "../minilibx/mlx.h"
# include <math.h>
# define DPRM

typedef struct s_fdf
{
	float	x;
	float	y;
	int		z;
	int		is_last;

	int		width;
	int		height;

	int		color;
	int		scale;
	int		z_scale;
	int		shift_x;
	int		shift_y;
	int		is_isometric;
	double	angle;
	int		win_x;
	int		win_y;
	void	*mlx_ptr;
	void	*win_ptr;
}		t_fdf;

t_fdf	**read_map(char *file_name);
void	draw(t_fdf **matrix);
void	ft_error(char *msg);
int		deal_key(int key, t_fdf **matrix);
void	set_param(t_fdf *a, t_fdf *b, t_fdf *param);
void	print_menu(t_fdf param);
void	isometric(t_fdf *dot, double angle);
void	new_window(int key, t_fdf **matrix);

#endif
