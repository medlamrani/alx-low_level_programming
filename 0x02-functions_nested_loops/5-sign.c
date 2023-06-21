#include"main.h"
/**
 * print_sign - print + if n is greater than zero,
 *		0 if n is zero and - if n is less than zero.
 *
 * @n: take input from other function
 *
 * return: 1 if n is greater than zero
 *         0 if n is zero
 *         -1 if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
