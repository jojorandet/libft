/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:22:05 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/12 13:01:33 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_strncmp_len(const char *h, const char *n, size_t len)
{
	while (*h == *n && *h && *n && len--)
	{
		h++;
		n++;
	}
	if (*n == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp_len(haystack, needle, len))
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}


/*int main()
{
	char	*haystack = "Jo Hell Hello you";
	char	*needle = "Hello";

	printf("the needle %s found in haystack %s is %s", needle, haystack, ft_strnstr(haystack, needle, 15));
	return (0);
}*/
