#include "main.h"
/*
 *last digit
 */int print_last_digit(int pld)
{
	int ld;

	ld = (pld % 10);
	if (ld < 0)
	{
		ld = (-1 * ld);
	}
	_putchar (ld + '0');
	return (ld);
}
