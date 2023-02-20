#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print comb of numbers'
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
