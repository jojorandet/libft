#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isascii(char c)
{
	int	expected = isascii(c);
	int	result = ft_isascii(c);

	if (result != expected)
	{
		printf("ft_isascii failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
		return (1);
	}
	return (0);
}

int	test_ft_isascii()
{
	int failures = 0;
	

	failures = failures + tester_isascii('9');
	failures += tester_isascii('0');
	failures += tester_isascii('5');


	failures += tester_isascii('A');
	failures += tester_isascii('z');
	failures += tester_isascii('-');
	failures += tester_isascii('=');


	failures += tester_isascii(' ');
	failures += tester_isascii('\t');


	failures += tester_isascii('\0');
	failures += tester_isascii('\n');


	failures += tester_isascii(47);
	failures += tester_isascii(58);


	if (failures == 0)
		printf("ft_isascii: All tests passed.\n");
	else
		printf("ft_isascii: %d tests failed.\n", failures);

	return (failures);
}