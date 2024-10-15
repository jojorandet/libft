/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:17:08 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/15 15:20:12 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	char	*cursor;
	size_t	len;

	if (*s1 == '\0')
		return (ft_calloc(1, 1));
	len = ft_strlen(s1);
	pointer = (char *)malloc(len * sizeof(char) + 1);
	if (!pointer)
		return (NULL);
	cursor = pointer;
	while (*s1)
	{
		*cursor = *s1;
		cursor++;
		s1++;
	}
	*cursor = '\0';
	return (pointer);
}
