#include <stdio.h>
/**
 * main - entry point
 *
 * Return: successful 0
 */
int main(void)
{
	int num;
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
			continue;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
