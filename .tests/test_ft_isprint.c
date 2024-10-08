#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	tester_isprint(char c)
{
	int expected = isprint(c);
	int result = ft_isprint(c);
	if (result == expected)
		return (0); // in both cases it will return 0 because they both render two trues, or two falses, meaning the tests passed. It should not render 1 because it woudl count as a failre
	if (result && expected)     // if (result != 0 && expected != 0) the same!

		return(0);
	printf("Mismatch between functions: 'isprint' returned %d, 'ft_isprint' returned %d.\n", expected, result);
	return (1);
}

int	test_ft_isprint()
{
	int failures = 0;
	
	failures = failures + tester_isprint('9');
	failures += tester_isprint('0');
	failures += tester_isprint('5');


	failures += tester_isprint('A');
	failures += tester_isprint('z'); 
	failures += tester_isprint('-'); 
	failures += tester_isprint('='); 
	failures += tester_isprint('!');  
	failures += tester_isprint('~');  

	// Testing for the space character
	failures += tester_isprint(' ');  // Space

	// Testing non-printable escape characters
	failures += tester_isprint('\0'); 
	failures += tester_isprint('\n'); // Newline
	failures += tester_isprint('\t'); // tab

	// Testing non printables from 0 to 31 and 127
	failures += tester_isprint(0);  // ASCII value before '0'
	failures += tester_isprint(5);  // ASCII value before '0'
	failures += tester_isprint(27);  // ASCII value before '0'
	failures += tester_isprint(31);  // ASCII value before '0'
	failures += tester_isprint(127);  // ASCII value before '0'

		// Return the total number of failed tests
	if (failures == 0)
		printf("ft_isprint: All tests passed.\n");
	else
		printf("ft_isprint: %d tests failed.\n", failures);

	return (failures);
}