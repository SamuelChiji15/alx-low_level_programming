#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always (success)
 */
int main(void)

{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
