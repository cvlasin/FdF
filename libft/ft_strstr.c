/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:22:19 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 20:22:21 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int j;
	int	size;

	i = -1;
	size = 0;
	while (str2[++i] != '\0')
		size++;
	if (size == 0)
		return ((char*)str1);
	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] == str1[i + j])
		{
			if (str2[j + 1] == '\0')
				return ((char*)str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
