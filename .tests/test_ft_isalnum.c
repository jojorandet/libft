#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isalnum(char c)
{
	int	expected = isalnum(c);
	int	result = ft_isalnum(c);
	if (result == expected)
	{
		printf("Both functions returned 0's, test passed.\n");
		return (0); // this is if both are false, then I return 0 because both tests render the same. if both are true then my tests work.
	}
	if (result && expected)
	{
		printf("Both functions return true, test passed. Given char IS alpha and num\n");\
		return (0); // this means both are different than zero, meaning true.
	}
	printf("ft_isalnum failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
	return (1); // his is due to the int tester of my function and what I need in my ft_test_isalnum
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
