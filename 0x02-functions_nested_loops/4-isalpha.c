#include "main.h"
/**
 * _isalpha - checks if input is alphabet
 *
 * @c: input to be checked
 * Return: based on input generates 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
