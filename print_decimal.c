#include "main.h"

print_decimal(int value)
{
	int count = 0;

	if (value >= 0)
	{
		print_decimal(value/10);
		count += _putchar(value % 10 + '0');
	}
	return (count);
}
