/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:40:54 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/06 16:15:56 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst1;
	unsigned char *src1;
	size_t			i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		if (dst1 < src1)
		{
			dst1[i] = src1[i];
			i++;
		}
		else if (src1 < dst1)
		{
			i = len;
			while (i > 0)
			{
				i--;
				dst1[i] = src1[i];
			}
		}
	}
	return (dst);
}

int main()
{
	char	dst[100];
	char	src[] = "hallo";

	ft_memmove(dst, src, 5);
	printf("Test1, no overlap: %s\n", dst);
	
	return (0);
}