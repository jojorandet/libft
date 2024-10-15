#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_tolower(char c)
{
	int	expected = tolower(c);
	int	result = ft_tolower(c);
	
	if (result != expected)
	{
		printf("ft_tolower failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
		return (1);
	}
	return (0);
}

int	main()
{
	int	failures = 0;

	failures += tester_tolower('A');
	failures += tester_tolower('B');
	failures += tester_tolower('z');
	failures += tester_tolower('0');
	failures += tester_tolower(']');
	failures += tester_tolower('.');
	failures += tester_tolower('/');
	failures += tester_tolower('a');
	failures += tester_tolower('z');

	if (failures == 0)
		printf("ft_tolower: All tests passed.\n");
	else
		printf("ft_tolower: %d tests failed.\n", failures);

	return (failures);
}
