#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isdigit(char c)
{
	int expected = isdigit(c);
	int result = ft_isdigit(c);

	if (result != expected)
	{
		printf("ft_isdigit failed for argument: '%c' | Expected: %d | Result: %d\n", c, expected, result);
		return (1);
	}
	return (0);
}

int	test_ft_isdigit()
{
	int failures = 0;
	
	// Testing digits
	failures = failures + tester_isdigit('9');
	failures += tester_isdigit('0');
	failures += tester_isdigit('5');

	// Testing non-digit characters
	failures += tester_isdigit('A');  // Uppercase letter
	failures += tester_isdigit('z');  // Lowercase letter
	failures += tester_isdigit('-');  // Symbol
	failures += tester_isdigit('=');  // Symbol

	// Testing whitespace characters
	failures += tester_isdigit(' ');  // Space
	failures += tester_isdigit('\t'); // Tab

	// Testing non-printable characters
	failures += tester_isdigit('\0'); // Null character
	failures += tester_isdigit('\n'); // Newline

	// Testing boundary values
	failures += tester_isdigit(47);  // ASCII value before '0'
	failures += tester_isdigit(58);  // ASCII value after '9'

		// Return the total number of failed tests
	if (failures == 0)
		printf("ft_isdigit: All tests passed.\n");
	else
		printf("ft_isdigit: %d tests failed.\n", failures);

	return (failures);
}