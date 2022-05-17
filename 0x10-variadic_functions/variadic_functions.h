#ifndef _FUNCTION_VARIADIC_H
#define _FUNCTION_VARIADIC_H

#include <stdarg.h>

/**
 * struct printer - multiple choice print
 * @symbol: A symbol representing a data type.
 * @print: function pointer to a function that prints
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
