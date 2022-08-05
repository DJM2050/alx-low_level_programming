#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> b5a321880bfbfcfe0fd4cafc85ea366b2fa5fdbd
#include <stdarg.h>
/**
<<<<<<< HEAD
 *sum_them_all - returns a sum of all its parameters
 *
 *@n:no. of arguements
 *
 *Return:sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(va, int);
	}
	va_end(va);
=======
* sum_them_all - sum of all its parameters
* @n: n args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
>>>>>>> b5a321880bfbfcfe0fd4cafc85ea366b2fa5fdbd
	return (sum);
}
