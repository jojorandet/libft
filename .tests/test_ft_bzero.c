#include "libtft.h"
#include <stdio.h>
#include <string.h>

int	tester_bzero(void *b1, void *b2; size_t len)
{
	unsigned char *expected = (unsigned char *)bzero(b1, len);
	unsigned char *result = (unsigned char *)ft_bzero(b2, len);
	size_t	i;

	i = 0;
	while(i < len)
	{
		if(expected[i] != result[i])
		{
			printf("ft_bzero failed at byte %zu len = %zu\n", i, len);
			return (1);
		}
		i++;
	}
	return (0);	
}

int	test_ft_bzero()
{
	int		failures;
	char	b1[100] = "abcdefghij";

	failures =  0;
	failures += tester_bzero(b1, 5);
	failures += tester_bzero(b1, 0);
	failures += tester_bzero(b1, 10);
	
	if(failures == 0)
	{
		printf("All tests for ft_bzero passed\n");
	}
	else
	{
		printf("%d tests failed for the ft_bzero\n", failures);
	}
	return (failures);
}


