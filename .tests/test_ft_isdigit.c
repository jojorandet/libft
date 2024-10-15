#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isdigit(char c)
{
	int expected = isdigit((unsigned char)c);
	int result = ft_isdigit(c);
	if (result == expected)
		return (0); // in both cases it will return 0 because they both render two trues, or two falses, meaning the tests passed. It should not render 1 because it woudl count as a failre
	if (result && expected)     // if (result != 0 && expected != 0) the same!
		return(0);
	printf("Mismatch between functions: 'isdigit' returned %d, 'ft_isdigit' returned %d.\n", expected, result);
	return (1);
}

int	main()
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