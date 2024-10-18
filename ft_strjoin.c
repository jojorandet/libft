/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:54:10 by jvoisard          #+#    #+#             */
/*   Updated: 2024/10/18 11:39:39 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_concat(char *dst, char const *s1, char const *s2)
{
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	*dst = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	ft_concat(result, s1, s2);
	return (result);
}
