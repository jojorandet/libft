#include "libft.h"

int	tester_bzero(void *b1, void *b2, size_t len)
{
	bzero(b1, len); // b1 and b2 are reset at the beginign of every test
	ft_bzero(b2, len);
	size_t	i;

	i = 0;
	while(i < len)
	{
		if(((unsigned char *)b1)[i] != ((unsigned char *)b2)[i])
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
	char	b1[100];
	char	b2[100];

	failures =  0;
	strcpy(b1, "abcdefghij");
	strcpy(b2, "abcdefghij");
	failures += tester_bzero(b1, b2, 5);

	

	failures += tester_bzero(b1, b2, 0);

	strcpy(b1, "abcdefghij");
	strcpy(b2, "abcdefghij");
	failures += tester_bzero(b1, b2, 10);

	

	
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


