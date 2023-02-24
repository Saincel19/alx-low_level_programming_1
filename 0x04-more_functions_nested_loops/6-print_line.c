#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n);

void print_line(int n)
{
	int counti = 0;

	while (n > 0 && counti < n)
	{
		_putchsr('_');
		counti++;
	}
	_putchsr('\n');
}
