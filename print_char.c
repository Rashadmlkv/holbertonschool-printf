#include "main.h"
/**
 * print_char - print character
 * @r: leng
 * @c: character
 * Return: leng
 */
int print_char(unsigned int r, char c)
{
	if (!c && c != '\0')
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		r = r + 6; }
	else
	{
		_putchar(c);
		r++; }
	return (r); }
