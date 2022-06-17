#include "main.h"

/**
 * *_strstr - function finds the first occurrence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 * to the  first
 * occurrence in string s of any
 * of th bytes in string accept
 * @needle: var
 * @haystack: var
 * Return: return numb of bytes
 */

char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	*a = haystack;
	*b = needle;

	for (;;)
	{
		if (!*b)
		{
			return (*haystack);
		}
		if (!*a)
		{
			return ('\0');
		}
		if (*a++ != *b++)
		{
			a = ++haystack;
			b = needle;
		}
	}
}
