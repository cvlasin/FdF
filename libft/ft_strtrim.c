/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:22:48 by cvlasin           #+#    #+#             */
/*   Updated: 2018/02/09 20:05:02 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	if (s)
	{
		i = 0;
		j = ft_strlen((char *)s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (!s[i])
			return (ft_strnew(0));
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		if (!(tmp = (char *)malloc(sizeof(char) * (j - i + 2))))
			return (NULL);
		k = 0;
		while (i <= j)
			tmp[k++] = s[i++];
		tmp[k] = '\0';
		return (tmp);
	}
	return (NULL);
}
