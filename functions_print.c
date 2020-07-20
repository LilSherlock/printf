#include "holberton.h"

/**
 * p_char - prints character c
 * @arg: character to print
 * Return: number of characters printed
 */
// Print char 
int p_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * p_str - prints string s
 * @arg: string to print
 * Return: number of characters printed
 */
// print string
int p_str(va_list list)
{
	unsigned int i = 0;
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}