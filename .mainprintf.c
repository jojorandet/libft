#include "ft_printf.h"
#include <stdio.h>

void	test_char(void)
{
	int		i;
	int		j;
	char	c;

	printf("-------------\n");
	printf("the char part\n");
	printf("-------------\n");
	c = 0;
	printf("--letter %c with real printf--\n", c);
	i = printf("%c\n", c);
	printf("%d\n", i - 1);
	printf("--letter %c with ft_printf--\n", c);
	j = ft_printf("%c\n", c);
	printf("%d\n", j - 1);
	printf("--letter %c in text with real printf--\n", c);
	i = printf("hey %c is a cool var\n", c);
	printf("%d\n", i - 1);
	printf("--letter %c in text with ft_printf--\n", c);
	j = ft_printf("hey %c is a cool var\n", c);
	printf("%d\n", j - 1);
	c = 'a';
	printf("--letter %c with real printf--\n", c);
	i = printf("%c\n", c);
	printf("%d\n", i - 1);
	printf("--letter %c with ft_printf--\n", c);
	j = ft_printf("%c\n", c);
	printf("%d\n", j - 1);
	printf("--letter %c in text with real printf--\n", c);
	i = printf("hey %c is a cool var\n", c);
	printf("%d\n", i - 1);
	printf("--letter %c in text with ft_printf--\n", c);
	j = ft_printf("hey %c is a cool var\n", c);
	printf("%d\n", j - 1);
}

void	test_int_d(void)
{
	int	i;
	int	j;
	int	n;

	printf("-------------\n");
	printf("the dnbr part\n");
	printf("-------------\n");
	n = 2147483647;
	printf("--number %d with real printf--\n", n);
	i = printf("%d\n", n);
	printf("%d\n", i - 1);
	printf("--number %d with ft_printf--\n", n);
	j = ft_printf("%d\n", n);
	printf("%d\n", j - 1);
	printf("--number %d in text with real printf--\n", n);
	i = printf("hey %d is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %d in text with ft_printf--\n", n);
	j = ft_printf("hey %d is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = -5;
	printf("--number %d with real printf--\n", n);
	i = printf("%d\n", n);
	printf("%d\n", i - 1);
	printf("--number %d with ft_printf--\n", n);
	j = ft_printf("%d\n", n);
	printf("%d\n", j - 1);
	printf("--number %d in text with real printf--\n", n);
	i = printf("hey %d is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %d in text with ft_printf--\n", n);
	j = ft_printf("hey %d is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = 0;
	printf("--number %d with real printf--\n", n);
	i = printf("%d\n", n);
	printf("%d\n", i - 1);
	printf("--number %d with ft_printf--\n", n);
	j = ft_printf("%d\n", n);
	printf("%d\n", j - 1);
	printf("--number %d in text with real printf--\n", n);
	i = printf("hey %d is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %d in text with ft_printf--\n", n);
	j = ft_printf("hey %d is a cool var\n", n);
	printf("%d\n", j - 1);
}

void	test_int_i(void)
{
	int	i;
	int	j;
	int	n;

	printf("-------------\n");
	printf("the inbr part\n");
	printf("-------------\n");
	n = 2147483647;
	printf("--number %i with real printf--\n", n);
	i = printf("%i\n", n);
	printf("%d\n", i - 1);
	printf("--number %i with ft_printf--\n", n);
	j = ft_printf("%i\n", n);
	printf("%d\n", j - 1);
	printf("--number %i in text with real printf--\n", n);
	i = printf("hey %i is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %i in text with ft_printf--\n", n);
	j = ft_printf("hey %i is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = -2147483648;
	printf("--number %i with real printf--\n", n);
	i = printf("%i\n", n);
	printf("%d\n", i - 1);
	printf("--number %i with ft_printf--\n", n);
	j = ft_printf("%i\n", n);
	printf("%d\n", j - 1);
	printf("--number %i in text with real printf--\n", n);
	i = printf("hey %i is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %i in text with ft_printf--\n", n);
	j = ft_printf("hey %i is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = 0;
	printf("--number %i with real printf--\n", n);
	i = printf("%i\n", n);
	printf("%d\n", i - 1);
	printf("--number %i with ft_printf--\n", n);
	j = ft_printf("%i\n", n);
	printf("%d\n", j - 1);
	printf("--number %i in text with real printf--\n", n);
	i = printf("hey %i is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %i in text with ft_printf--\n", n);
	j = ft_printf("hey %i is a cool var\n", n);
	printf("%d\n", j - 1);
}

void	test_uint(void)
{
	int				i;
	int				j;
	unsigned int	n;

	printf("-------------\n");
	printf("the unbr part\n");
	printf("-------------\n");
	n = 4294967295;
	printf("--number %u with real printf--\n", n);
	i = printf("%u\n", n);
	printf("%d\n", i - 1);
	printf("--number %u with ft_printf--\n", n);
	j = ft_printf("%u\n", n);
	printf("%d\n", j - 1);
	printf("--number %u in text with real printf--\n", n);
	i = printf("hey %u is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %u in text with ft_printf--\n", n);
	j = ft_printf("hey %u is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = 0;
	printf("--number %u with real printf--\n", n);
	i = printf("%u\n", n);
	printf("%d\n", i - 1);
	printf("--number %u with ft_printf--\n", n);
	j = ft_printf("%u\n", n);
	printf("%d\n", j - 1);
	printf("--number %u in text with real printf--\n", n);
	i = printf("hey %u is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %u in text with ft_printf--\n", n);
	j = ft_printf("hey %u is a cool var\n", n);
	printf("%d\n", j - 1);
}

void	test_xint(void)
{
	int				i;
	int				j;
	unsigned int	n;

	printf("-------------\n");
	printf("the xnbr part\n");
	printf("-------------\n");
	n = 4294967295;
	printf("--number %x with real printf--\n", n);
	i = printf("%x\n", n);
	printf("%d\n", i - 1);
	printf("--number %x with ft_printf--\n", n);
	j = ft_printf("%x\n", n);
	printf("%d\n", j - 1);
	printf("--number %x in text with real printf--\n", n);
	i = printf("hey %x is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %x in text with ft_printf--\n", n);
	j = ft_printf("hey %x is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = 0;
	printf("--number %x with real printf--\n", n);
	i = printf("%x\n", n);
	printf("%d\n", i - 1);
	printf("--number %x with ft_printf--\n", n);
	j = ft_printf("%x\n", n);
	printf("%d\n", j - 1);
	printf("--number %x in text with real printf--\n", n);
	i = printf("hey %x is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %x in text with ft_printf--\n", n);
	j = ft_printf("hey %x is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = 123456789;
	printf("--number %x with real printf--\n", n);
	i = printf("%x\n", n);
	printf("%d\n", i - 1);
	printf("--number %x with ft_printf--\n", n);
	j = ft_printf("%x\n", n);
	printf("%d\n", j - 1);
	printf("--number %x in text with real printf--\n", n);
	i = printf("hey %x is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %x in text with ft_printf--\n", n);
	j = ft_printf("hey %x is a cool var\n", n);
	printf("%d\n", j - 1);
}

void	test_Xint(void)
{
	int				i;
	int				j;
	unsigned int	n;

	printf("-------------\n");
	printf("the Xnbr part\n");
	printf("-------------\n");
	n = 4294967295;
	printf("--number %X with real printf--\n", n);
	i = printf("%X\n", n);
	printf("%d\n", i - 1);
	printf("--number %X with ft_printf--\n", n);
	j = ft_printf("%X\n", n);
	printf("%d\n", j - 1);
	printf("--number %X in text with real printf--\n", n);
	i = printf("hey %X is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %X in text with ft_printf--\n", n);
	j = ft_printf("hey %X is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = 0;
	printf("--number %X with real printf--\n", n);
	i = printf("%X\n", n);
	printf("%d\n", i - 1);
	printf("--number %X with ft_printf--\n", n);
	j = ft_printf("%X\n", n);
	printf("%d\n", j - 1);
	printf("--number %X in text with real printf--\n", n);
	i = printf("hey %X is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %X in text with ft_printf--\n", n);
	j = ft_printf("hey %X is a cool var\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n = 123456789;
	printf("--number %X with real printf--\n", n);
	i = printf("%X\n", n);
	printf("%d\n", i - 1);
	printf("--number %X with ft_printf--\n", n);
	j = ft_printf("%X\n", n);
	printf("%d\n", j - 1);
	printf("--number %X in text with real printf--\n", n);
	i = printf("hey %X is a cool var\n", n);
	printf("%d\n", i - 1);
	printf("--number %X in text with ft_printf--\n", n);
	j = ft_printf("hey %X is a cool var\n", n);
	printf("%d\n", j - 1);
}

void	test_pointer(void)
{
	int				i;
	int				j;
	void			*n1;
	void			*n2;
	void			*n3;

	printf("----------------\n");
	printf("the pointer part\n");
	printf("----------------\n");

	n1 = (void *)0xFFFFFFFF;
	printf("--pointer %p with real printf--\n", n1);
	i = printf("%p\n", n1);
	printf("%d\n", i - 1);
	printf("--pointer %p with ft_printf--\n", n1);
	j = ft_printf("%p\n", n1);
	printf("%d\n", j - 1);
	printf("--pointer %p in text with real printf--\n", n1);
	i = printf("hey %p is a cool pointer\n", n1);
	printf("%d\n", i - 1);
	printf("--pointer %p in text with ft_printf--\n", n1);
	j = ft_printf("hey %p is a cool pointer\n", n1);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n2 = NULL;
	printf("--pointer %p with real printf--\n", n2);
	i = printf("%p\n", n2);
	printf("%d\n", i - 1);
	printf("--pointer %p with ft_printf--\n", n2);
	j = ft_printf("%p\n", n2);
	printf("%d\n", j - 1);
	printf("--pointer %p in text with real printf--\n", n2);
	i = printf("hey %p is a cool pointer\n", n2);
	printf("%d\n", i - 1);
	printf("--pointer %p in text with ft_printf--\n", n2);
	j = ft_printf("hey %p is a cool pointer\n", n2);
	printf("%d\n", j - 1);
	printf("-------------\n");
	n3 = (void *)0x12345678;
	printf("--pointer %p with real printf--\n", n3);
	i = printf("%p\n", n3);
	printf("%d\n", i - 1);
	printf("--pointer %p with ft_printf--\n", n3);
	j = ft_printf("%p\n", n3);
	printf("%d\n", j - 1);
	printf("--pointer %p in text with real printf--\n", n3);
	i = printf("hey %p is a cool pointer\n", n3);
	printf("%d\n", i - 1);
	printf("--pointer %p in text with ft_printf--\n", n3);
	j = ft_printf("hey %p is a cool pointer\n", n3);
	printf("%d\n", j - 1);
}

void	test_string(void)
{
	int		i;
	int		j;
	char	*str1;
	char	*str2;
	char	*str3;

	printf("---------------\n");
	printf("the string part\n");
	printf("---------------\n");
	str1 = "Hello, World!";
	printf("--string '%s' with real printf--\n", str1);
	i = printf("%s\n", str1);
	printf("%d\n", i - 1);
	printf("--string '%s' with ft_printf--\n", str1);
	j = ft_printf("%s\n", str1);
	printf("%d\n", j - 1);
	printf("--string '%s' in text with real printf--\n", str1);
	i = printf("hey '%s' is a cool string\n", str1);
	printf("%d\n", i - 1);
	printf("--string '%s' in text with ft_printf--\n", str1);
	j = ft_printf("hey '%s' is a cool string\n", str1);
	printf("%d\n", j - 1);
	printf("-------------\n");
	str2 = "";
	printf("--string '%s' with real printf--\n", str2);
	i = printf("%s\n", str2);
	printf("%d\n", i - 1);
	printf("--string '%s' with ft_printf--\n", str2);
	j = ft_printf("%s\n", str2);
	printf("%d\n", j - 1);
	printf("--string '%s' in text with real printf--\n", str2);
	i = printf("hey '%s' is a cool string\n", str2);
	printf("%d\n", i - 1);
	printf("--string '%s' in text with ft_printf--\n", str2);
	j = ft_printf("hey '%s' is a cool string\n", str2);
	printf("%d\n", j - 1);
	printf("-------------\n");
	str3 = "Test string 123";
	printf("--string '%s' with real printf--\n", str3);
	i = printf("%.5s\n", str3);
	printf("%d\n", i - 1);
	printf("--string '%s' with ft_printf--\n", str3);
	j = ft_printf("%.5s\n", str3);
	printf("%d\n", j - 1);
	printf("--string '%s' in text with real printf--\n", str3);
	i = printf("hey '%s' is a cool string\n", str3);
	printf("%d\n", i - 1);
	printf("--string '%s' in text with ft_printf--\n", str3);
	j = ft_printf("hey '%s' is a cool string\n", str3);
	printf("%d\n", j - 1);
	printf("-------------\n");
	str3 = NULL;
	printf("--string '%s' with real printf--\n", str3);
	i = printf("%s\n", str3);
	printf("%d\n", i - 1);
	printf("--string '%s' with ft_printf--\n", str3);
	j = ft_printf("%s\n", str3);
	printf("%d\n", j - 1);
	printf("--string '%s' in text with real printf--\n", str3);
	i = printf("hey '%s' is a cool string\n", str3);
	printf("%d\n", i - 1);
	printf("--string '%s' in text with ft_printf--\n", str3);
	j = ft_printf("hey '%s' is a cool string\n", str3);
	printf("%d\n", j - 1);
}

void	test_percent(void)
{
	int	i;
	int	j;

	printf("----------------\n");
	printf("the percent part\n");
	printf("----------------\n");
	printf("--percent %% with real printf--\n");
	i = printf("%%\n");
	printf("%d\n", i - 1);
	printf("--percent %% with ft_printf--\n");
	j = ft_printf("%%\n");
	printf("%d\n", j - 1);
	printf("--percent %% in text with real printf--\n");
	i = printf("hey %% is a cool symbol\n");
	printf("%d\n", i - 1);
	printf("--percent %% in text with ft_printf--\n");
	j = ft_printf("hey %% is a cool symbol\n");
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--percent %% in a longer sentence with real printf--\n");
	i = printf("This is 100%% true!\n");
	printf("%d\n", i - 1);
	printf("--percent %% in a longer sentence with ft_printf--\n");
	j = ft_printf("This is 100%% true!\n");
	printf("%d\n", j - 1);
	printf("-------------\n");
}

void	test_combination(void)
{
	int		i;
	int		j;
	int		n = 1234567;
	unsigned int	u = 123456789;
	void		*ptr = (void *)0xabcdef;
	char		*str = "Hello, World!";

	printf("-------------\n");
	printf("the combination part\n");
	printf("-------------\n");
	printf("--int %d with real printf--\n", n);
	i = printf("%d\n", n);
	printf("%d\n", i - 1);
	printf("--int %d with ft_printf--\n", n);
	j = ft_printf("%d\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--unsigned int %u with real printf--\n", u);
	i = printf("%u\n", u);
	printf("%d\n", i - 1);
	printf("--unsigned int %u with ft_printf--\n", u);
	j = ft_printf("%u\n", u);
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--pointer %p with real printf--\n", ptr);
	i = printf("%p\n", ptr);
	printf("%d\n", i - 1);
	printf("--pointer %p with ft_printf--\n", ptr);
	j = ft_printf("%p\n", ptr);
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--hexadecimal %x with real printf--\n", n);
	i = printf("%x\n", n);
	printf("%d\n", i - 1);
	printf("--hexadecimal %x with ft_printf--\n", n);
	j = ft_printf("%x\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--uppercase hexadecimal %X with real printf--\n", n);
	i = printf("%X\n", n);
	printf("%d\n", i - 1);
	printf("--uppercase hexadecimal %X with ft_printf--\n", n);
	j = ft_printf("%X\n", n);
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--string %s with real printf--\n", str);
	i = printf("%s\n", str);
	printf("%d\n", i - 1);
	printf("--string %s with ft_printf--\n", str);
	j = ft_printf("%s\n", str);
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--percent %% with real printf--\n");
	i = printf("%%\n");
	printf("%d\n", i - 1);
	printf("--percent %% with ft_printf--\n");
	j = ft_printf("%%\n");
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--combined: %d %u %x %X %s %p %% with real printf--\n", n, u, n, n, str, ptr);
	i = printf("%d %u %x %X %s %p %%\n", n, u, n, n, str, ptr);
	printf("%d\n", i - 1);
	printf("--combined: %d %u %x %X %s %p %% with ft_printf--\n", n, u, n, n, str, ptr);
	j = ft_printf("%d %u %x %X %s %p %%\n", n, u, n, n, str, ptr);
	printf("%d\n", j - 1);
	printf("-------------\n");
	printf("--combined: %d %u %x %X %s %p %% with charcs inbetween with real printf--\n", n, u, n, n, str, ptr);
	i = printf("these %d fun %u arguments %x have %X characters %s in %p between %% GG!\n", n, u, n, n, str, ptr);
	printf("%d\n", i - 1);
	printf("--combined: %d %u %x %X %s %p %% with charcs inbetween with ft_printf--\n", n, u, n, n, str, ptr);
	j = ft_printf("these %d fun %u arguments %x have %X characters %s in %p between %% GG!\n", n, u, n, n, str, ptr);
	printf("%d\n", j - 1);
	printf("-------------\n");
}

int	main(void)
{
	test_int_d();
	test_int_i();
	test_char();
	test_uint();
	test_xint();
	test_Xint();
	test_pointer();
	test_string();
	test_percent();
	test_combination();
}
