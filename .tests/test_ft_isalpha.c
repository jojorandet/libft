#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isalpha(char c)
{
	int expected = isalpha(c);
	int result = ft_isalpha(c);
	
	if (result != expected)
	{
		printf("ft_isalpha failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
		return (1);
	}
	return (0);
}

int test_ft_isalpha()
{
	int failures = 0;

	failures += tester_isalpha('a');
	failures += tester_isalpha('b');
	failures += tester_isalpha('A');
	failures += tester_isalpha('B');
	failures += tester_isalpha('.');
	failures += tester_isalpha('=');
	failures += tester_isalpha('}');

	// Return the total number of failed tests
	if (failures == 0)
		printf("ft_isalpha: All tests passed.\n");
	else
		printf("ft_isalpha: %d tests failed.\n", failures);

	return (failures);
}