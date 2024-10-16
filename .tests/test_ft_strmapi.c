#include <stdio.h>
#include <ctype.h>

#include "../ft_strmapi.c"

char example_transform(unsigned int index, char c)
{
	return (char)(c + index);
}

int main()
{
	char	str[] = "hello";
	char	*result;

	result = ft_strmapi(str, example_transform);

	if (result)
	{
		printf("the original string %s was transformed\n", str);
		printf("into this %s using the example_transform function", result);
	}
	else
		printf("the test for str_mapi has failed");

	return (0);
}