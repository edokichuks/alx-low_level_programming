#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: array that contains the program cmd arguments
 * Return: 0 - sucess
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%s\n", argv[0]);
	return (0);
}
