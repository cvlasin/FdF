/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   citire.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 13:25:14 by cvlasin           #+#    #+#             */
/*   Updated: 2018/02/15 20:55:45 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		perspective(int keycode, t_fdf *key)
{
	if (keycode == 9)
	{
		mlx_clear_window(key->mlx, key->win);
		if (key->view == 1)
		{
			key->view = 2;
			key->z = -20;
			key->sx = (WIDTH * 0.35) / (key->chars - 1);
		}
		else
		{
			key->view = 1;
			key->z = -4;
			key->sx = (WIDTH * 0.45) / (key->chars - 1);
		}
		draw(key);
	}
}

int			helper_all_tab(t_fdf *data, char *line)
{
	int		x;
	char	**tab;

	x = 0;
	tab = ft_strsplit(line, ' ');
	while (tab[x])
	{
		free(tab[x]);
		x++;
	}
	if (data->lines == 0)
		data->chars = x;
	else if (x != data->chars)
		return (-1);
	free(line);
	free(tab);
	data->lines++;
	return (0);
}

int			alloc_tab(t_fdf *data)
{
	char	*line;
	int		ret;

	line = NULL;
	data->lines = 0;
	data->chars = 0;
	while ((ret = get_next_line(data->fd, &line)) > 0)
	{
		if (helper_all_tab(data, line) == -1)
			return (-1);
	}
	data->map = ft_memalloc(sizeof(int*) * data->lines);
	close(data->fd);
	data->fd = open(data->name, O_RDONLY);
	return (0);
}

int			reader(t_fdf *data)
{
	char	*line;
	char	**tab;
	int		xytab[3];

	xytab[1] = 0;
	if (alloc_tab(data) == -1)
		return (-1);
	while ((xytab[2] = get_next_line(data->fd, &line)) > 0)
	{
		xytab[0] = 0;
		tab = ft_strsplit(line, ' ');
		data->map[xytab[1]] = ft_memalloc(sizeof(int) * data->chars);
		while (tab[xytab[0]] != NULL)
		{
			data->map[xytab[1]][xytab[0]] = ft_atoi(tab[xytab[0]]);
			free(tab[xytab[0]]);
			xytab[0]++;
		}
		free(tab);
		xytab[1]++;
	}
	return ((xytab[2] == -1) ? -1 : 0);
}
