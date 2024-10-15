/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvoisard <jonas.voisard@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:04:32 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/14 15:48:51 by jvoisard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src, size_t len)
{
	char	*dest_start;

	dest_start = dest;
	while (*src && len--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char    *substr;
	size_t  strlen;

	if (!s)
		return (NULL);  
	strlen = ft_strlen(s);
	if (start >= strlen)
		return (ft_calloc(1, 1));
	if (len > strlen - start)
		len = strlen - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (*s && start--)
		s++;
	ft_strcpy(substr, s, len);
	substr[len] = '\0';
	return (substr);
}
