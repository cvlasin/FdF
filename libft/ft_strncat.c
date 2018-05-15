/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:18:36 by cvlasin           #+#    #+#             */
/*   Updated: 2018/01/25 20:18:37 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *cp_dest;

	cp_dest = dest;
	while (*cp_dest != '\0')
		cp_dest++;
	while (*src != '\0' && n-- != 0)
		*cp_dest++ = *src++;
	*cp_dest = '\0';
	return (dest);
}
