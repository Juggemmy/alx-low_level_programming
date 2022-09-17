/*
 * File: 7-print_diagonal.c
 */

#include "main.h"

 /**
  * print_diagonal -main entry.
  * void: nothing
  * @n: integer, number of times that \ will be printed
  * Description; function that draws a diagonal line on the terminal.
  * Return: void (success)
  */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
