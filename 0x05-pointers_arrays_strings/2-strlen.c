#include "main.h"

/**
 * _strlen -  get string length
 * @s: pointer to string
 * Description: desc
 * Return: void
 */


int _strlen(char *s)
{
	int length = 0;
	
	while (s[length])
	{
		length++;
	}
	return (length);
}
