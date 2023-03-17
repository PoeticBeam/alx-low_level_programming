#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start point
 * Description: main is the entry point function
 *To understand main, you read to read books
 *on C.
 * Return: 0
 */

int main(void)
{
	int n;
	int lastfig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastfig = (n % 10);
	if (lastfig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastfig);
	}
	else if (lastfig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastfig);
	}
	else if ((lastfig < 6) && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastfig);
	}
	return (0);
}
