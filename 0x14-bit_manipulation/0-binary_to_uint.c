#include "main.h"

/**
*binary_to_uint : converts a binary number to an unsigned int
*@b is pointing to a string of 0 and 1 chars
*return: unsigned int
**/
unsigned int binary_to_uint(const char *b)
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

	return (valu);
}
