/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 01:15:01 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 21:17:35 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	aux;
	int		i;
	int		k;
	int		l;

	i = 0;
	k = ft_strlen(str) - 1;
	l = ft_strlen(str) / 2;
	while (i < l)
	{
		aux = str[i];
		str[i] = str[k];
		str[k] = aux;
		i++;
		k--;
	}
	return (str);
}
