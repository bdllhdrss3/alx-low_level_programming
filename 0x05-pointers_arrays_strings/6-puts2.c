#include "main.h"

/**
 * puts2 - prints chara ter with new line
 * @str: pointer to string
 * Description: desc
 * Return: void
 */


void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
