/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrandet <jrandet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:40:54 by jrandet           #+#    #+#             */
/*   Updated: 2024/10/07 15:22:05 by jrandet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_backward_copy(unsigned char *dest, unsigned char *src, size_t len)
{
	size_t	i;

	i = len;
	while(i > 0)
	{
		i--;
		dest[i] = src[i];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char *dest1;
	unsigned char *src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;

	if (dest1 == src1 || len == 0)
		return (dest);
	
	if (dest1 < src1)
		ft_memcpy(dest1, src1, len);
	else
		ft_backward_copy(dest1, src1, len);
	return (dest);
}

/*int main()
{
	char	dest[100];
	char	src[] = "hallo";

	ft_memmove(dest, src, 5);
	printf("Test1, no overlap: %s\n", dest);

	char	src2[] = "123456789";

	ft_memmove(src2 + 4, src2, 6);
	src2[9] = '\0';
	printf("Test2, dest overlaps after the source, backward copy, %s\n", src2);

	char	src3[] = "123456789";

	ft_memmove(src3, src3 + 4, 6);
	src3[6] = '\0';
	printf("Test3, dest overlaps after src, forward copy, %s\n", src3);

	char	src4[] = "123456789";
	
	ft_memmove(src4, src4, 6);
	printf("Test4, src and dest are the same. return dest %s\n", src4);

	char	dest5[10];
	char	src5[] = "";

	ft_bzero(dest5, 10);
	ft_memmove(dest5, src5, 0);
	printf("Test5, nothing to copy src empty,  n to copy is = 0, Initial content in dest5 %s", dest5);
	
	return (0); 
}*/
