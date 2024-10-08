/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:01:45 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/07 16:01:45 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char *dst1;
	unsigned char *
=======
/*   By: jrandet <jrandet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:11:09 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/07 21:59:49 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char * src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = strlen(src);
	if (dstsize == 0)
		return (src_len);

	i = 0;
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (src_len);
>>>>>>> ae2909d653f994a140f0749dd79a617b07d5f150
}