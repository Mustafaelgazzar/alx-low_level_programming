#include "main.h"

/**
 *is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 *@s: String to check.
 *Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 *check - checker for the palindrome.
 *@s: String
 *@start: int moves from right to left.
 *@end: int moves from left to right.
 *@mod: int.
 *Return: 0 or 1
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
