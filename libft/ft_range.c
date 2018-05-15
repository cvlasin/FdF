/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:16:56 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 21:05:23 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int *t;

	if (min >= max)
		return (NULL);
	t = malloc(max - min);
	i = 0;
	while (i < (max - min))
	{
		t[i] = min + i;
		i++;
	}
	i = 0;
	return (t);
}
