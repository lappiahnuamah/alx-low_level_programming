#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters used in the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ak;
	unsigned int i, sum = 0;
	
	va_start(ak, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ak, int);
	
	va_end(ak);
	return (sum);
}
