#include <unistd.h>
/**
 * _putchar - print character
 * @c: character
 * Return: print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
