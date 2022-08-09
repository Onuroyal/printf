#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	int count = 0, i;

	va_list data;
	
	va_start(data, format);

	/*count the number of character*/
	for (i=0; format[i] != '%' && format[i] != '\0'; i++)
		{
			count = count + _putchar(format[i]);
		}

	return (count);
	
}
