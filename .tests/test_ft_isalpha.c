#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	tester_isalpha(char c)
{
	int expected = isalpha(c);
	int result = ft_isalpha(c);
	
	if (result != expected)
		printf("tester_isalpha failed for argument: %c | Expected: %d | Result: %d\n", c, expected, result);
}

void test_ft_isalpha()
{
	tester_isalpha('a');
	tester_isalpha('b');
	tester_isalpha('A');
	tester_isalpha('B');
	tester_isalpha('.');// '.' is not alphabetic, so expect 0
	tester_isalpha('='); // '=' is not alphabetic, so expect 0
	tester_isalpha('}');  // '}' is not alphabetic, so expect 0
}