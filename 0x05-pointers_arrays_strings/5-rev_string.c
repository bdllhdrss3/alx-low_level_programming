#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer to string
 * Description: desc
 * Reurn: void
 */


void rev_string(char *s)
{
	int len;
	int i;
	char temp;
	int half;

	for (len = 0; s[len] != '\0'; len++)
		;
	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
