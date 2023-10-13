#include "../include/libft.h"
#include <criterion/criterion.h>
#include <criterion/new/assert.h>

// TEST for isalnum
Test(ctype, alnum_0)
{
	cr_assert(eq(int, ft_isalnum('a'), 1));
}

Test(ctype, alnum_1)
{
	cr_assert(eq(int, ft_isalnum('z'), 1));
}

Test(ctype, alnum_2)
{
	cr_assert(eq(int, ft_isalnum('1'), 1));
}

Test(ctype, alnum_3)
{
	cr_assert(eq(int, ft_isalnum('2'), 1));
}

Test(ctype, alnum_4)
{
	cr_assert(eq(int, ft_isalnum('3'), 1));
}

Test(ctype, alnum_5)
{
	cr_assert(eq(int, ft_isalnum('4'), 1));
}

Test(ctype, alnum_6)
{
	cr_assert(eq(int, ft_isalnum('5'), 1));
}

Test(ctype, alnum_7)
{
	cr_assert(eq(int, ft_isalnum('7'), 1));
}

Test(ctype, alnum_8)
{
	cr_assert(eq(int, ft_isalnum('0'), 1));
}

Test(ctype, alnum_9)
{
	cr_assert(eq(int, ft_isalnum(43), 0));
}

Test(ctype, alnum_10)
{
	cr_assert(eq(int, ft_isalnum(32), 0));
}

Test(ctype, alnum_11)
{
	cr_assert(eq(int, ft_isalnum(99), 1));
}

Test(ctype, alnum_12)
{
	cr_assert(eq(int, ft_isalnum(108), 1));
}

Test(ctype, alnum_13)
{
	cr_assert(eq(int, ft_isalnum(126), 0));
}

Test(ctype, alnum_14)
{
	cr_assert(eq(int, ft_isalnum('#'), 0));
}

// TEST for isalpha
Test(ctype, isalpha_0)
{
	cr_assert(eq(int, ft_isalpha('0'), 0));
}

Test(ctype, isalpha_1)
{
	cr_assert(eq(int, ft_isalpha('a'), 1));
}

Test(ctype, isalpha_2)
{
	cr_assert(eq(int, ft_isalpha('Z'), 1));
}

Test(ctype, isalpha_3)
{
	cr_assert(eq(int, ft_isalpha('K'), 1));
}

Test(ctype, isalpha_4)
{
	cr_assert(eq(int, ft_isalpha('9'), 0));
}

Test(ctype, isalpha_5)
{
	cr_assert(eq(int, ft_isalpha('#'), 0));
}

Test(ctype, isalpha_6)
{
	cr_assert(eq(int, ft_isalpha('l'), 1));
}

Test(ctype, isalpha_7)
{
	cr_assert(eq(int, ft_isalpha(255), 0));
}

Test(ctype, isalpha_8)
{
	cr_assert(eq(int, ft_isalpha('W'), 1));
}

Test(ctype, isalpha_9)
{
	cr_assert(eq(int, ft_isalpha('2'), 0));
}

Test(ctype, isalpha_10)
{
	cr_assert(eq(int, ft_isalpha('>'), 0));
}

// TEST for isascii
Test(ctype, isascii_0)
{
	cr_assert(eq(int, ft_isascii(255), 0));
}

Test(ctype, isascii_1)
{
	cr_assert(eq(int, ft_isascii(1024), 0));
}

Test(ctype, isascii_2)
{
	cr_assert(eq(int, ft_isascii(127), 1));
}

Test(ctype, isascii_3)
{
	cr_assert(eq(int, ft_isascii(4), 1));
}

Test(ctype, isascii_4)
{
	cr_assert(eq(int, ft_isascii(12), 1));
}

Test(ctype, isascii_5)
{
	cr_assert(eq(int, ft_isascii(87), 1));
}

Test(ctype, isascii_6)
{
	cr_assert(eq(int, ft_isascii(299), 0));
}

Test(ctype, isascii_7)
{
	cr_assert(eq(int, ft_isascii(112), 1));
}

Test(ctype, isascii_8)
{
	cr_assert(eq(int, ft_isascii('W'), 1));
}

Test(ctype, isascii_9)
{
	cr_assert(eq(int, ft_isascii('2'), 1));
}

Test(ctype, isascii_10)
{
	cr_assert(eq(int, ft_isascii('>'), 1));
}

// TEST for isdigit
Test(ctype, isdigit_0)
{
	cr_assert(eq(int, ft_isdigit(255), 0));
}

Test(ctype, isdigit_1)
{
	cr_assert(eq(int, ft_isdigit(1024), 0));
}

Test(ctype, isdigit_2)
{
	cr_assert(eq(int, ft_isdigit('7'), 1));
}

Test(ctype, isdigit_3)
{
	cr_assert(eq(int, ft_isdigit(4), 0));
}

Test(ctype, isdigit_4)
{
	cr_assert(eq(int, ft_isdigit(12), 0));
}

Test(ctype, isdigit_5)
{
	cr_assert(eq(int, ft_isdigit('A'), 0));
}

Test(ctype, isdigit_6)
{
	cr_assert(eq(int, ft_isdigit(299), 0));
}

Test(ctype, isdigit_7)
{
	for (int i = 48; i < 58; i++)
	{
		cr_assert(eq(int, ft_isdigit(i), 1));
	}
}

Test(ctype, isdigit_8)
{
	cr_assert(eq(int, ft_isdigit('W'), 0));
}

Test(ctype, isdigit_9)
{
	cr_assert(eq(int, ft_isdigit('2'), 1));
}

Test(ctype, isdigit_10)
{
	cr_assert(eq(int, ft_isdigit('a'), 0));
}

// TEST for islower

Test(ctype, islower_6)
{
	for (int i = 0; i < 97; i++)
	{
		cr_assert(eq(int, ft_islower(i), 0));
	}
}

Test(ctype, islower_7)
{
	for (int i = 97; i < 123; i++)
	{
		cr_assert(eq(int, ft_islower(i), 1));
	}
}

Test(ctype, islower_8)
{
	for (int i = 123; i < 1024; i++)
	{
		cr_assert(eq(int, ft_islower(i), 0));
	}
}

Test(ctype, islower_9)
{
	cr_assert(eq(int, ft_islower('2'), 0));
}

Test(ctype, islower_10)
{
	cr_assert(eq(int, ft_islower('a'), 1));
}


// TEST for isupper

Test(ctype, isupper_6)
{
	for (int i = 0; i < 60; i++)
	{
		cr_assert(eq(int, ft_isupper(i), 0));
	}
}

Test(ctype, isupper_7)
{
	for (int i = 65; i < 91; i++)
	{
		cr_assert(eq(int, ft_isupper(i), 1));
	}
}

Test(ctype, isupper_8)
{
	for (int i = 123; i < 1024; i++)
	{
		cr_assert(eq(int, ft_isupper(i), 0));
	}
}

Test(ctype, isupper_9)
{
	cr_assert(eq(int, ft_isupper('2'), 0));
}

Test(ctype, isupper_10)
{
	cr_assert(eq(int, ft_isupper('a'), 0));
}

// TEST for isprint
Test(ctype, isprint_6)
{
	for (int i = 0; i < 32; i++)
	{
		cr_assert(eq(int, ft_isprint(i), 0));
	}
}

Test(ctype, isprint_7)
{
	for (int i = 32; i < 126; i++)
	{
		cr_assert(eq(int, ft_isprint(i), 1));
	}
}

Test(ctype, isprint_8)
{
	for (int i = 127; i < 1024; i++)
	{
		cr_assert(eq(int, ft_isprint(i), 0));
	}
}

Test(ctype, isprint_9)
{
	cr_assert(eq(int, ft_isprint('9'), 1));
}

Test(ctype, isprint_10)
{
	cr_assert(eq(int, ft_isprint('a'), 1));
}

// TEST for tolower
Test(ctype, tolower_6)
{
	for (int i = 1; i < 65; i++)
	{
		cr_assert(eq(int, ft_tolower(i), i));
	}
}

Test(ctype, tolower_7)
{
	for (int i = 65; i < 91; i++)
	{
		cr_assert(eq(int, ft_tolower(i), i + 32));
	}
}

Test(ctype, tolower_8)
{
	for (int i = 127; i < 1024; i++)
	{
		cr_assert(eq(int, ft_tolower(i), i));
	}
}

Test(ctype, tolower_9)
{
	cr_assert(eq(int, ft_tolower('9'), '9'));
}

Test(ctype, tolower_10)
{
	cr_assert(eq(int, ft_tolower('a'), 'a'));
}

// TEST for toupper
Test(ctype, toupper_6)
{
	for (int i = 1; i < 65; i++)
	{
		cr_assert(eq(int, ft_toupper(i), i));
	}
}

Test(ctype, toupper_7)
{
	for (int i = 97; i < 123; i++)
	{
		cr_assert(eq(int, ft_toupper(i), i - 32));
	}
}

Test(ctype, toupper_8)
{
	for (int i = 127; i < 1024; i++)
	{
		cr_assert(eq(int, ft_toupper(i), i));
	}
}

Test(ctype, toupper_9)
{
	cr_assert(eq(int, ft_toupper('9'), '9'));
}

Test(ctype, toupper_10)
{
	cr_assert(eq(int, ft_toupper('a'), 'A'));
}
