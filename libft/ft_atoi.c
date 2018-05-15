/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 06:16:17 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 21:18:23 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_empty(const char *str)
{
	int i;
	int x;

	i = 0;
	x = 1;
	while (x != 0)
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		else
			x = 0;
	}
	return (i);
}

static int	ft_sign(const char *str, int i)
{
	if (str[i] == '-')
		return (-1);
	else if (str[i] == '+')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int	n;
	int	pn;
	int k;

	k = 1;
	n = 0;
	i = ft_empty(str);
	pn = ft_sign(str, i);
	if (pn == -1 || pn == 1)
		i++;
	else
		pn = 1;
	while (k != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = n * 10 + (str[i] - '0');
		else
			k = 0;
		i++;
	}
	n = n * pn;
	return (n);
}
