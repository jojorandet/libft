#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	tester_isalpha(char c, int expected)
{
	int result = ft_isalpha(c);
	
	if (result != expected)
		printf("tester_isalpha failed for argument: %c | Expected: %d | Result: %d\n", c, expected, result);
}

void test_ft_isalpha()
{
	tester_isalpha('a', 0);
	tester_isalpha('b', 1);
	tester_isalpha('A', 1);
	tester_isalpha('B', 1);
	tester_isalpha('.', 0);   // '.' is not alphabetic, so expect 0
	tester_isalpha('=', 0);   // '=' is not alphabetic, so expect 0
	tester_isalpha('}', 0);   // '}' is not alphabetic, so expect 0
}