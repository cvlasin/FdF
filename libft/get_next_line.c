/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 17:56:41 by cvlasin           #+#    #+#             */
/*   Updated: 2018/02/15 18:16:36 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_save(int const fd, char **saved)
{
	char	*buffer;
	char	*hold;
	int		result;

	if (!(buffer = (char*)malloc(sizeof(*buffer) * (BUFF_SIZE + 1))))
		return (-1);
	result = read(fd, buffer, BUFF_SIZE);
	if (result > 0)
	{
		buffer[result] = '\0';
		hold = ft_strjoin(*saved, buffer);
		free(*saved);
		*saved = hold;
	}
	free(buffer);
	return (result);
}

int			get_next_line(int const fd, char **line)
{
	int			result;
	char		*eof;
	static char	*saved = NULL;

	if (!saved)
		saved = (char*)malloc(sizeof(*saved));
	if (saved == NULL || !line || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	while ((eof = ft_strchr(saved, '\n')) == NULL)
	{
		result = ft_save(fd, &saved);
		if (result == 0)
		{
			if (ft_strlen(saved) == 0)
				return (0);
			saved = ft_strjoin(saved, "\n");
		}
		if (result < 0)
			return (-1);
	}
	*line = ft_strsub(saved, 0, ft_strlen(saved) - ft_strlen(eof));
	saved = ft_strdup(eof + 1);
	return (1);
}
