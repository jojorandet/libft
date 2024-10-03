#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isalnum(char c)
{
	int	expected = isalnum(c);
	int	result = ft_isalnum(c);
	
	if (result != expected)
	{
		printf("ft_isalnum failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
		return (1);
	}
	return (0);
}

int	test_ft_isalnum()
{
	int	failures = 0;

	failures += tester_isalnum('A');
	failures += tester_isalnum('b');
	failures += tester_isalnum('9');
	failures += tester_isalnum('0');
	failures += tester_isalnum(']');
	failures += tester_isalnum('.');
	failures += tester_isalnum('/');
	failures += tester_isalnum('h');

	if (failures == 0)
		printf("ft_isalnum: All tests passed.\n");
	else
		printf("ft_isalnum: %d tests failed.\n", failures);

	return (failures);
}
