#include "main.h"
#include <stdio.h>
#include <string.h>

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome_recursive - helper function to check for
 * palindrome using recursion
 * @s: The input string
 * @start: The starting index of the current substrin
 * @end: The ending index of the current substring
 *
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
