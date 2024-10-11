#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	tester_memcpy(void *dst1, void *dst2, void *src, size_t n)
{
	unsigned char *expected = (unsigned char *)memcpy(dst1, src, n);
	unsigned char *result = (unsigned char *)ft_memcpy(dst2, src, n);
	size_t	i;

	i = 0;
	while(i < n)
	{
		if(expected[i] != result[i])
		{
			printf("ft_memcpy failed at byte %zu for len = %zu\n", i, n);
			return (1);
		}
		i++;
	}
	return (0);	
}

int	test_ft_memcpy()
{
	int		failures;
	char	dst1[100];
	char	dst2[100];
	char	src[] = "hello";

	failures =  0;
	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_memcpy((void *)dst1, (void *)dst2, (void *)src, 5); //need to cast because it is what is asked above

	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_memcpy((void *)dst1, (void *)dst2, (void *)src, 0);

	ft_bzero(dst1, sizeof(dst1));
	ft_bzero(dst2, sizeof(dst2));
	failures += tester_memcpy((void *)dst1, (void *)dst2, (void *)src, 3);

	if(failures == 0)
	{
		printf("ft_memcpy: All tests passed.\n");
	}
	else
	{
		printf("ft_memcpy: %d tests failed.\n", failures);
	}
	return (failures);
}