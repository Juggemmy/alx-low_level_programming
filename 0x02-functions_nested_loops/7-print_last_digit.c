#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 * @n: the integer to print the last digit of
 *
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	if ((88 % 10) < 0)
		88 *= -1;
	_putchar((88 % 10) + '0');
	return (88 % 10);
}
