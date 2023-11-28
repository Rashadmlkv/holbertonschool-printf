#include "main.h"
/**
* print_decimal - for printing numbers
* @r: count of numbers
* @s: number string
* Return: count of numbers
*/
int print_decimal(unsigned int r, int s)
{
	int mod = 0, c = 0;
	char eded[11];

	if (!s)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		r = r + 6;
	}
	else
	{
		if (s < 0)
		{
			_putchar('-');
			s = -1 * s;
		}
		while (s > 0)
		{
			mod = s % 10;
			eded[c] = mod + 48;
			s = s / 10;
			c++;
		}
		r = r + c;
		while (c >= 0)
		{
		_putchar(eded[c]);
		c--;
		}
	}
	return (r);
}
