/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:40:54 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/05 22:26:44 by jrandet          ###   ########.fr       */
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
		if (dest1 < src1)
		{
			dest1[i] = src1[i];
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

	printf("%s", ft_memmove((void *)dst, (void *)src, 5));
	return (0);
}