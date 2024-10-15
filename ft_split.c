/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:11:08 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/15 19:26:12 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size_array(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return count;
} // here i calculate the number of rows in my 2d array 

static char	*ft_strcut(char *start, char *end)
{
	char	*str_n;
	char	*cursor;
	size_t	len;
	
	len = end - start;
	str_n = malloc(len + 1);
	if (!str_n)
		return (NULL);
	cursor = str_n;
	while (start < end)
		*cursor++ = *start++;
	*cursor = '\0';
	return (str_n);
}

static void	build_array(char **array, char const *s, char c)
{
	char	*start;
	char	*end;
	size_t	i_array;

	i_array = 0;
	end = (char *)s;
	while (*end)
	{
		while (*end && *end == c)
			end++;
		start = end;
		while (*end && *end != c)
			end++;
		array[i_array++] = ft_strcut(start, end);
	}
}


char	**ft_split(char const *s, char c)
{

	char	**array;
	size_t	size_array;
	
	size_array = 0;
	if (!*s)
		return (0);
	size_array = get_size_array(s, c);
	array = ft_calloc(size_array + 1, sizeof(*array));
	if (!array)
		return (0);
	build_array(array, s, c);
	return (array);
}