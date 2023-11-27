/**
 * _printf - print string
 * @format: format
 * Return: letter count
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	unsigned int say = 0, i = 0, j = 0, r = 0;

	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%' && (*(format + i + 1) == 'c'
					|| *(format  + i + 1) == 's'))
		{
			say = say + 1; }
		i++; }
	va_start(ptr, format);
	for (j = 0; *(format + j) != '\0'; j++)
	{
		if (*(format + j) != '%')
		{
			r++, _putchar(*(format + j)); }
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
	return (r); }
