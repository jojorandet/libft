#include "libft.h"
#include <stdio.h>
#include <string.h>

int	tester_strlen(const char *str)
{
	int	expected = strlen(str);
	int	result = ft_strlen(str);

	if(result != expected)
	{
		printf("ft_strlen failed for input: '%s' | Expected: %d | Result: %d\n", str, expected, result);
		return (1);
	}
	return (0);
}

int	test_ft_strlen()
{
	int	failures = 0;

	failures += tester_strlen("HELLO");
	failures += tester_strlen("hello my name is");
	failures += tester_strlen("pass the sugar please darling\n");
	failures += tester_strlen(" & ");
	failures += tester_strlen("j");

	//test for non printable characters
	failures += tester_strlen("\n \t ");

	//test for the empty string
	failures += tester_strlen("");

	//test for multiple \0 characters 
	char	multiple_nulls[] = "test\0prout\0ksdjhakdsjh";
	failures += tester_strlen(multiple_nulls);

	//superlongstring
	char	superlongstring[] = "hhhhhuggtrftrdftggftde4t5rfg5yr6fghygtrf5tyguhhuygtf5r6tgy7huscvbcncfdsdffghggfdsghjfhdgfsdghfdgsfdghgjfhgdfssgdhfgfghfjhdgsfdfghfdgsfafgdhfjghdgsfasfghjfhgdfdfgdfhdgfsdfhdgsd";
	failures += tester_strlen(superlongstring);

	if (failures == 0)
		printf("ft_strlen: All tests passed.\n");
	else
		printf("ft_strlen: %d tests failed.\n", failures);

	return (failures);
}