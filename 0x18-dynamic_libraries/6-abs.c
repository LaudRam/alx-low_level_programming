#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 * @e: Parameter to be checked
 * Return: Always e
 */

int _abs(int e)
{
	if (e < 0)
		e = -(e);
	else if (e >= 0)
		e = e;
	return (e);
}
