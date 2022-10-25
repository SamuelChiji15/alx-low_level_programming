#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string paramter imput
 * Return: Nothing
 */

void rev_string(char *s)
{
	int 1, i;
	char ch;

	for (l = 0; s[1] != '\0'; ++1)
		;

	for (i = 0; i < 1 / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[1 - 1 - i] = ch;
	}
}
