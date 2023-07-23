#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
	printf("the last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
	printf("the last digit of %d is %d and is zero\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
	printf("the last digit of %d is %d and is less than 6 and not zero\n"\
, n, x);
	}
	return (0);
}
