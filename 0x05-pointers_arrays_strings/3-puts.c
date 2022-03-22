#include "main.h"


/**
 * _puts - prints character of dtring
 * @str: string pointer
 * Description: desc
 * Return: void
 */


void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
