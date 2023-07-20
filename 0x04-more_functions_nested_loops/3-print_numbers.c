#include "main.h"

/**
  * print_numbers - Prints numbers form 0 to 9
  *
  * Return: Always 0
  */
void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
