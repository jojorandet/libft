/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:11:08 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/15 21:49:42 by jrandet          ###   ########.fr       */
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
	return (count);
}

static char	*ft_strcut(char *start, char *end)
{
	char	*str_n;
	char	*cursor;
	size_t	len;

	len = end - start;
	if (len <= 0)
		return (NULL);
	str_n = malloc(len + 1);
	if (!str_n)
		return (NULL);
	cursor = str_n;
	while (start < end)
		*cursor++ = *start++;
	*cursor = '\0';
	return (str_n);
}

static int	clean_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return (0);
}

static int	fill_array(char **array, char *start, char c)
{
	char	*end;
	char	*item;
	size_t	i_array;

	i_array = 0;
	while (*start)
	{
		while (*start && *start == c)
			start++;
		end = start;
		while (*end && *end != c)
			end++;
		if (start != end)
		{
			item = ft_strcut(start, end);
			if (!item)
				return (clean_array(array));
			array[i_array++] = item;
		}
		start = end;
	}
	array[i_array] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	size_array;

	size_array = 0;
	if (!s || !*s)
		return (ft_calloc(1, sizeof(char *)));
	size_array = get_size_array(s, c);
	if (size_array == 0)
		return (ft_calloc(1, sizeof(char *)));
	array = ft_calloc(size_array + 1, sizeof(*array));
	if (!array)
		return (NULL);
	if (fill_array(array, (char *)s, c) == 1)
		return (array);
	return (NULL);
}
