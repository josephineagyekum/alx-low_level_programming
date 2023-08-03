#include "main.h"
/**
 * binary_to_unit - converting a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number.
 */

unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}

	return (value);
}
