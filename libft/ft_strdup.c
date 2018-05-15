/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 19:36:21 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 19:36:23 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;

	s_dup = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s_dup == 0)
		return (0);
	else
		return (ft_strcpy(s_dup, s));
}
