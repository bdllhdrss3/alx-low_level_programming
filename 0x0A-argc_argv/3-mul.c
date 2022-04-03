#include <stdio.h>
#include <stdlib.h>
/*
 * mai n- main block
 * Description: argv multiplications
 * Return: 0
 * .
 */
 int main(int argc, char *argv[])
{
	int c;

	if (argc == 2 || argc == 1)
	{
		puts("Error\n");
		return (1);
	}
	c = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", c);
	return (0);


}
