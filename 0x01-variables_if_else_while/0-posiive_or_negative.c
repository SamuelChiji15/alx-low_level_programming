#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - proram entry point.
 * Return: 0 always (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
		printf("%d is posotive\n", n);
	else if (n < 0 )
		printf("%d is negative\n", n);
	else if ( n == 0 )
		printf("%d is zero\n", n);
	return (0);
}