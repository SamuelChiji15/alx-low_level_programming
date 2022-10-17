#include <stdio.h>
/**
 * main - entry point
 * Return: o always (success)
 */
int main(void)

{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	return (0);
}

