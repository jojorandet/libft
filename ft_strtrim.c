/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:34:02 by jvoisard          #+#    #+#             */
/*   Updated: 2024/10/15 11:45:09 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_charset(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*start;
	int		len;

	if (s1[0] == '\0' || s1 == set)
		return ft_calloc(1,1);
	while (*s1 && (is_in_charset(*s1, set)))
		s1++;
	start = (char *)s1;
	while (*s1)
		s1++;
	s1--;
	while (*s1 && is_in_charset(*s1, set))
		s1--;
	len = s1 - start + 1;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_strncpy(trimmed, start, len);
	trimmed[len] = '\0';
	return trimmed;
}