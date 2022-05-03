#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: array that contains the program cmd arguments
 * _attribute_((usused)): just not used
 * Return: 0 - sucess
 */

int main(int argc  _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
