#include "main.h"
#include <stdarg.h>
/**
 * _printf - print string
 * @format: format
 * Return: letter count
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	unsigned int j = 0, r = 0;

	if (format == NULL)
		exit(98);
	va_start(ptr, format);
	for (j = 0; *(format + j) != '\0'; j++)
	{
		if (*(format + j) != '%')
		{
			r++, _putchar(*(format + j)); }
		else if (*(format + j) == '%' && *(format + j + 1) == '\0')
			continue;
		else if (*(format + j) == '%' && *(format + j + 1) == '%')
		{
			r++, j++, _putchar('%') }
		else if (*(format + j) == '%' && *(format + j + 1) != 'c'
				&& *(format  + j + 1) != 's')
		{
			r++, _putchar(*(format + j)); }
		else if (*(format + j) == '%' && *(format + j + 1) == 'c')
		{
			r = print_char(r, va_arg(ptr, int));
			j++; }
		else if (*(format + j) == '%' && *(format + j + 1) == 's')
		{
			r = print_string(r, va_arg(ptr, char *));
			j++; } }
	if (r == 0)
		r = -1;
	return (r); }
