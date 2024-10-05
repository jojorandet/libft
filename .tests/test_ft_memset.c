#include "libft.h"
#include <stdio.h>
#include <string.h>

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
			return (1); //this exits the while loop
		}
		i++;// increment the i inside the while loop if it returns 0
	}
	return (0);	
}
//we could have also done a strcmp

int	test_ft_memset()
{
	int		failures;
	char	b1[100];
	char	b2[100];

	failures =  0;
	failures += tester_memset(b1, b2, 'A', 5);
	failures += tester_memset(b1, b2, 0, 20);
	failures += tester_memset(b1, b2, 255, 15); //255 is the highest value 

	if(failures == 0)
	{
		printf("All tests for ft_memset passed\n");
	}
	else
	{
		printf("%d tests failed for the ft_memset\n", failures);
	}
	return (failures);
}