/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 13:30:58 by cvlasin           #+#    #+#             */
/*   Updated: 2018/02/15 20:35:20 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <math.h>
# include "libft/libft.h"
# define WIDTH 1200
# define HEIGHT 850

typedef struct		s_fdf
{
	int				fd;
	char			*name;
	void			*mlx;
	void			*win;
	int				**map;
	int				lines;
	int				check;
	int				view;
	int				chars;
	int				z;
	int				dx;
	int				dy;
	int				sx;
	int				sy;
	unsigned long	color;
}					t_fdf;

void				draw(t_fdf *draw);
void				draw_lines(t_fdf *draw, int x, int y);
void				check_env(t_fdf *draw);
void				draw_line(t_fdf *draw, int *tabxy, int x, int y);
void				mlx(t_fdf *key);
int					keyboard(int keycode, t_fdf *key);
void				decal(int keycode, t_fdf *key);
int					cross(void);
void				zoom(int keycode, t_fdf *key);
void				fdf(t_fdf *data);
int					reader(t_fdf *data);
int					alloc_tab(t_fdf *data);
int					helper_all_tab(t_fdf *data, char *line);
void				perspective(int keycode, t_fdf *key);

#endif
