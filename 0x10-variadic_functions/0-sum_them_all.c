#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of variadic variable
 * @n: const
 * @...: a variable number of parameters to cal the sum of
 * Return: If n == 0 -0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;
	
	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		sum += var_arg(nums, int);
	}

	va_end(num);
	
	return (sum);
}
