#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int	tester_toupper(char c)
{
	int	expected = toupper(c);
	int	result = ft_toupper(c);
	
	if (result != expected)
	{
		printf("ft_toupper failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
		return (1);
	}
	return (0);
}

int	test_ft_toupper()
{
	int	failures = 0;

	failures += tester_toupper('a');
	failures += tester_toupper('b');
	failures += tester_toupper('z');
	failures += tester_toupper('0');
	failures += tester_toupper(']');
	failures += tester_toupper('.');
	failures += tester_toupper('/');
	failures += tester_toupper('A');
	failures += tester_toupper('B');

	if (failures == 0)
		printf("ft_toupper: All tests passed.\n");
	else
		printf("ft_toupper: %d tests failed.\n", failures);

	return (failures);
}
