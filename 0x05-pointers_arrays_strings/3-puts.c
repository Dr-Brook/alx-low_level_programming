#include "main.h"

/**
 * main - check the code for Holberton School students.
 * @_puts - Prints a string
 * @str: The string to print
 * Return: Always 0.
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
