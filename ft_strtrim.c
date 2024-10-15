/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jonas.voisard@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:34:02 by jvoisard          #+#    #+#             */
/*   Updated: 2024/10/14 20:46:55 by jvoisard         ###   ########.fr       */
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

	while (*s1 && (is_in_charset(*s1, set)))
		s1++;
	start = (char *)s1;
	while (*s1)
		s1++;
	while (*s1 && is_in_charset(*s1, set))
		s1--;
	len = s1 - start;
	trimmed = malloc(len + 1);
	ft_strncpy(trimmed, start, len);
	return trimmed;
}
