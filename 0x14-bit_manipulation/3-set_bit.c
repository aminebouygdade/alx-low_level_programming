#include "main.h"

/**
 * set_bit - sets a bit at given index
 * @n: P to number to change
 * @index: index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
