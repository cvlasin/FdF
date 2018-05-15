/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 19:11:13 by cvlasin           #+#    #+#             */
/*   Updated: 2018/02/15 20:04:50 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fdf(t_fdf *data)
{
	if (reader(data) == -1)
	{
		ft_putendl("Error");
		return ;
	}
	mlx(data);
}

int		main(int ac, char **av)
{
	t_fdf	data;

	if (ac == 2)
	{
		data.name = av[1];
		data.fd = open(data.name, O_RDONLY);
		fdf(&data);
	}
	else
		ft_putendl("usage: ./fdf file");
	return (0);
}
