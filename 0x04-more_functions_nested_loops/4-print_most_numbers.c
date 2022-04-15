#include "main.h"

/**
*print_most_numbers - print the numbers from0 to 9,
*except w nd 4, followeed by a new line
*/

void print_most_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{

		if (i != 2 && i != 4)
		{

			_putchar(i + '0');

		}

	}

	_putchar('\n);
}
