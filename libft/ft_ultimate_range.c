/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 18:30:47 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 21:05:02 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*vector;

	*range = NULL;
	if (min >= max)
		return (0);
	vector = (int *)malloc(sizeof(int) * (max - min));
	if (vector == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		vector[i] = min + i;
		i++;
	}
	*range = vector;
	return (max - min);
}
