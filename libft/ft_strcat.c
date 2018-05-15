/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 19:34:51 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 19:34:57 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *cp_dest;

	cp_dest = dest;
	while (*cp_dest != '\0')
		cp_dest++;
	while (*src != '\0')
		*cp_dest++ = *src++;
	*cp_dest = '\0';
	return (dest);
}
