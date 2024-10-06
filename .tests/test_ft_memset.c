#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	tester_memset(void *b1, void *b2, int c, size_t len)
{
	unsigned char *expected = (unsigned char *)memset(b1, c, len);
	unsigned char *result = (unsigned char *)ft_memset(b2, c, len);
	size_t	i;

	i = 0;
	while(i < len)
	{
		if(expected[i] != result[i])
		{
			printf("ft_memset failed at byte %zu for c = %d and len = %zu\n", i, c, len);
			return (1);
		}
		i++;
	}
	return (0);	
}

int	test_ft_memset()
{
	int		failures;
	char	b1[100];
	char	b2[100];

	failures =  0;
	failures += tester_memset(b1, b2, 'A', 5);
	failures += tester_memset(b1, b2, 0, 20);
	failures += tester_memset(b1, b2, 255, 15);

	if(failures == 0)
	{
		printf("ft_memset: All tests passed.\n");
	}
	else
	{
		printf("ft_memset: %d tests failed.\n", failures);
	}
	return (failures);
}